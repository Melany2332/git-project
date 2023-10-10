#include <iostream>
#include<vector>
#include <algorithm>

#include"C:\Users\melan\Downloads\Timing.h"

using namespace std;


void ascendingSort(std::vector<int>& nums, const int N) {

	for (int i = 0; i < N - 1; i++) {

		for (int j = i + 1; j < N; j++) {

			if (nums[i] > nums[j])
			{
				std::swap(nums[i], nums[j]);
				//print(nums);
			}
		}

		//cout << "Incrementing i to:" << i << endl;
	}
}


auto generateRandomVector(int elementCount) // a utility funct (look more into utility
{
	std::vector<int>result;
	for (int i = 0; i < elementCount; i++) {

result.push_back(rand() % elementCount);
//easy to see if sorted
	}

	return result;

}


void printSortTimetookforN(int N) {

	auto vecN = generateRandomVector;
	cout << "For " << N << " elements, sort time took: " << "\t";

	Timer* tN = new Timer;
	//ascendingSort(vecN, N);
	delete tN;
	cout << "Using ascending sort";
	cout << "\n\n";




}

int main()
{
auto vec10 = generateRandomVector(10);


cout << "For 10 elements, sort time took: " << "\t";
Timer* t = new Timer;
std::sort(vec10.begin(), vec10.end());
delete t;
cout << "Using standard sort" << "\n\n";

auto copyvec10 = vec10;

cout << "For 10 elements, sort time took: " << "\t";
Timer* t10_other = new Timer;
ascendingSort(copyvec10, 10);
delete t10_other;
cout << "Using ascending sort" << "\n\n";
//printSortTimetookforN(10);



auto vec100 = generateRandomVector(100);


cout << "For 100 elements, sort time took: " << "\t";
Timer* t1 = new Timer;
std::sort(vec100.begin(), vec100.end());
delete t1;
cout << "Using standard sort" << "\n\n";

auto copyVec100 = vec100;
cout << "For 100 elements, sort time took: " << "\t";
Timer* t100 = new Timer;
ascendingSort(copyVec100, 100);
delete t100;
cout << "using ascending sort" << "\n\n";
//printSortTimetookforN(100);



auto vec1k = generateRandomVector(1'000);
//auto copyVec1k = vec1k;

cout << "For 1,000 elements, sort time took: " << "\t";
Timer* t2 = new Timer;
std::sort(vec1k.begin(), vec1k.end());
delete t2;
cout << "Using standard sort" << "\n\n";

auto copyVec1k = vec1k;
cout << "For 1,000 elements, sort time took: " << "\t";
Timer* t1k = new Timer;
ascendingSort(copyVec1k, 1'000);
delete t1k;
cout << "using ascending sort" << "\n\n";
//printSortTimetookforN(10000);



auto vec10K = generateRandomVector(10'000);


cout << "For 10,000 elements, sort time took: " << "\t";
Timer* t3 = new Timer;
std::sort(vec10K.begin(), vec10K.end());
delete t3;
cout << "Using standard sort" << "\n\n";

auto copyVec10k = vec10K;
cout << "For 10,000 elements, sort time took: " << "\t";
Timer* t10k = new Timer;
ascendingSort(copyVec10k, 10'000);
delete t10k;
cout << "using ascending sort" << "\n\n";

//printSortTimetookforN(100000);





return 0;
}
