/**
 * @file Lab6_maldosari.cpp 
 * @author Musab Aldosari
 * @date 2026-10-12
 * @brief Compare static arrays and vectors for processing student scores.
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/**
 * @brief Calculates the average of the scores.
 * @param arr The array containing integer scores.
 * @param size The number of scores.
 * @return The average score as a float
 */
float calculateAverage(const int arr[], int size) {
	float total = 0;

	for (int i = 0; i < size; i++) {
		total += arr[i];
	}
	return total / size;
}

/**
 * @brief Finds the highest score in the array.
 * @param arr The array containing integer scores.
 * @param size The number of scores.
 * @return The highest score.
 */
int findMax(const int arr[], int size) {
	int highest = arr[0];

	for (int i = 0; i < size; i++) {
		if (arr[i] > highest) {
			highest = arr[i];
		}
	}
	return highest;
}

/**
 * @brief Finds the lowest in the array.
 * @param arr The array containing integer scores.
 * @param size The number of scores.
 * @return The lowest score.
 */
int findMin(const int arr[], int size) {
	int lowest = arr[0];

	for (int i = 0; i < size; i++) {
		if (arr[i] < lowest) {
			lowest = arr[i];
		}
	}
	return lowest;
}

/**
 * @brief Calculations the average of the scores.
 * @param vec The Vector containing integer scores.
 * @return The average score as a float
 */
float calculateAverage(const vector<int>& vec) {
	float total = 0;

	for (int i = 0; i < vec.size(); i++) {
		total += vec[i];
	}
	return total / vec.size();
}
/**
 * @brief Finds the highest score in the vector.
 * @param vec The vector containing integer scores.
 * @return The highest score.
 */
int findMax(const vector<int>& vec) {
	int highest = vec[0];

	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] > highest) {
			highest = vec[i];
		}
	}
	return highest;
}
/**
 * @brief Finds the lowest score in the vector.
 * @param vec The vector containing integer scores.
 * @return The lowest score.
 */ 
int findMin(const vector<int>& vec) {
	int lowest = vec[0];

	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] < lowest) {
			lowest = vec[i];
		}
	}
	return lowest;
}
/*
 * @brief Calculates statistics using a fixed-size static array.
 * @param None.
 * @return Void.
 */
void arraySolution() {
	const int SIZE = 10;
	int scores[SIZE];

	cout << "Static Array Solution" << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << "Enter test score " << (i + 1) << ": ";
		cin >> scores[i];

		while (scores[i] < 0 || scores[i] > 100) {
			cout << "Invalid score. Please enter a score between 0 and 100: ";
			cin >> scores[i];
		}
	}
	cout << "Average score: " << calculateAverage(scores, SIZE) << endl;
	cout << "Highest score: " << findMax(scores, SIZE) << endl;
	cout << "Lowest score: " << findMin(scores, SIZE) << endl;
}
/**
 * @brief Calculates statistics using a dynamic vector.
 * @param None.
 * @return Void.
 */
void vectorSolution() {
	vector<int> scores;
	int score;

	cout << endl << "Dynamic Vector Solution" << endl;
	cout << "Enter test scores (enter -1 to finish):" << endl;
	cin >> score;

	while (score != -1) {
		if (score >= 0 && score <= 100) {
			scores.push_back(score);
		}
		else {
			cout << "Invalid score. Please enter a score between 0 and 100: " << endl;
		}
		cout << "Enter test score (or -1 to finish): ";
		cin >> score;
	}

	cout << "Average score: " << calculateAverage(scores) << endl;
	cout << "Highest score: " << findMax(scores) << endl;
	cout << "Lowest score: " << findMin(scores) << endl;

	sort(scores.begin(), scores.end());

	cout << "Scores sorted in ascended order: ";
	for (int i = 0; i < scores.size(); i++) {
		cout << scores[i] << " ";
	}
	cout << endl;
}

/**
 * @brief Main function to execute the program.
 * @param None.
 * @return 0 to indicate successful exit.
 */
int main() {
	arraySolution();
	vectorSolution();

	return 0;
}
