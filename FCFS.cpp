// C++ program to Calculate Waiting
// Time for given Processes
#include <iostream>
using namespace std;

// Function to Calculate waiting time
// and average waiting time
void CalculateWaitingTime(int at[],
						int bt[], int N)
{

	// Declare the array for waiting queue
	// time
	int wt[N];

	// Waiting time for first process
	// is 0  first process does not wait takes priority
	wt[0] = 0;

	// Print waiting time process 1   / TAT time /  need to fix this up , tat time is usually not  known
	cout << "PN\t\tAT\t\t"
		<< "BT\t\tWT\n\n";
	cout << "1"
		<< "\t\t" << at[0] << "\t\t"
		<< bt[0] << "\t\t" << wt[0] << endl;   // bt -> burst time 

	// Calculating waiting time for  wait time calcualtion logic
	// each process from the given
	// formula
	for (int i = 1; i < 5; i++) {
		wt[i] = (at[i - 1] + bt[i - 1]
				+ wt[i - 1]) - at[i];

		// Print the waiting time for
		// each process
		cout << i + 1 << "\t\t" << at[i]
			<< "\t\t" << bt[i] << "\t\t"
			<< wt[i] << endl;
	}

	// Declare variable to calculate
	// average
	float average;
	float sum = 0;

	// Loop to calculate sum of all
	// waiting time
	for (int i = 0; i < 5; i++) {
		sum = sum + wt[i];
	}

	// Find average waiting time
	// by dividing it by no. of process
	average = sum / 5;

	// Print Average Waiting Time
	cout << "\nAverage waiting time = "
		<< average;
}

// formula is wait time of preivios + arrival time of previous + burst time of previous - arrival time of current

// avg wait time = toal wait time sum / num of processes 



// Driver code
int main()
{
	// Number of process
	int N = 5;

	// Array for Arrival time
	int at[] = { 0, 1, 2, 3, 4 };

	// Array for Burst Time
	int bt[] = { 4, 3, 1, 2, 5 };

	// Function call to find
	// waiting time
	CalculateWaitingTime(at, bt, N);
	return 0;
}




// FCFS does the job bur overall its slow
// waiting time wait is often large
// as numner of tasks increase avg waiting time might increase


