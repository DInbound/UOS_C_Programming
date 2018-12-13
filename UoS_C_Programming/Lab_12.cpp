/*
 *	Made by: Hofmans Daan
 *	2018/12/13
 *	Lab Assignment #12
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Lab_12.hpp";

/*
	Implement a structure for students
	Read data from a file
	Use Dynamic Memory Allocation
	Store data to an array of the structure.
	Calculate the sum, average, max of scores for each student and for each subject of all students.
	Show the data.
*/

struct st {
	char name[10];
	int student_id;
	double math_score;
	double english_score;
	double sum;
	double average;
};
typedef struct st Student;

/// <summary>Read a file from a desired path.</summary>
/// <param name="filePath">The path to the file to read.</param>
/// <returns>Returns a array of characters.</returns>
Student * readStudentFile(const char *filePath)
{
	FILE *file;
	file = fopen(filePath, "r");

	// Check for bad open
	if (!file)
	{
		printf("Cant read file");
		return 0;
	}
	
	int n;
	fscanf(file, "%d", &n);

	Student *students = (Student *)malloc(n * sizeof(Student));

	// Scan per line
	for (int i = 0; i < n; i++)
	{
		// Read a single student
		fscanf(file, "%s", students[i].name);
		fscanf(file, "%d", &students[i].student_id);
		fscanf(file, "%lf", &students[i].english_score);
		fscanf(file, "%lf", &students[i].math_score);

		students[i].sum = students[i].english_score + students[i].math_score;
		students[i].average = (students[i].english_score + students[i].math_score) / 2;
	}

	fclose(file);
	return students;
}

void Lab12_Exercise1()
{
	const char *filePath = "student_data.txt";

	int n = 6;
	Student *students = readStudentFile(filePath);

	double average_math = 0;
	double average_english = 0;
	double average_sum = 0;
	double average_average = 0;
	double max_math = 0;
	double max_english = 0;
	double max_sum = 0;
	double max_average = 0;

	printf("Name       ID         Math  Eng  Sum  Avg\n");
	printf("-----------------------------------------\n");

	for (int i = 0; i < n; i++)
	{
		printf("%-10s %-10d %4.1lf %4.1lf %4.1lf %4.1lf\n", students[i].name, students[i].student_id, students[i].math_score, students[i].english_score, students[i].sum, students[i].average);


		average_math += students[i].math_score;
		average_english += students[i].english_score;
		average_sum += students[i].sum;
		average_average += students[i].average;

		if (max_math < students[i].math_score)
			max_math = students[i].math_score;

		if (max_english < students[i].english_score)
			max_english = students[i].english_score;

		if (max_sum < students[i].sum)
			max_sum = students[i].sum;

		if (max_average < students[i].average)
			max_average = students[i].average;
	}
	average_math = average_math / n;
	average_english = average_english / n;
	average_sum = average_sum / n;
	average_average = average_average / n;

	printf("-----------------------------------------\n");
	printf("Average               %4.1lf %4.1lf %4.1lf %4.1lf\n", average_math, average_english, average_sum, average_average);
	printf("Max                   %4.1lf %4.1lf %4.1lf %4.1lf\n", max_math, max_english, max_sum, max_average);

	free(students);
}