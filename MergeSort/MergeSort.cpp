#include <iostream>
#include <vector>
#include <chrono>
#include <fstream>

#define N1 10000
#define N2 100000
#define STEP 10000
#define T 10

using std::vector; using std::cout;
using std::endl; using std::ofstream;

void merge(vector<int>& v, int l, int m, int h)
{
	vector<int> aux;
	
	for (int k = 0, i = l, j = m + 1; k <= h - l; ++k)
	{
		if (i > m) 
		{ aux.push_back(v[j++]); continue; }
		if (j > h)
		{ aux.push_back(v[i++]); continue; }
		v[i] < v[j] ? aux.push_back(v[i++]) : aux.push_back(v[j++]);
	}

	for (int i = 0; i < aux.size(); ++i)
		v[l++] = aux[i];

}
void merge_sort(vector<int>& v, int low, int high)
{
	if (high <= low) return;
	int mid = (low + high) / 2;
	merge_sort(v, low, mid);
	merge_sort(v, mid + 1, high);
	merge(v, low, mid, high);
}
int main()
{	
	ofstream file;
	file.open("AverageTimes.csv");

	file << "Size," << "Average Runtime\n";

	for (int i = N1; i <= N2; i += STEP)
	{
		double sum = 0;

		for (int j = 0; j < T; ++j)
		{
			vector<int> v;

			for (int k = 0; k < i; ++k)
				v.push_back(rand() % i);

			auto start = std::chrono::high_resolution_clock::now();
			merge_sort(v, 0, v.size() - 1);
			auto end = std::chrono::high_resolution_clock::now();

			std::chrono::duration<double> elapsed = end - start;
			sum += elapsed.count();
		}

		file << i << ',' << sum / T << '\n';
		cout << i << ' ' << sum / T << endl;
	}

	return 0;
}