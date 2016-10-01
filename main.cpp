// [LAST NAME] [FIRST NAME] [ID NUMBER]
#include <vector>
#include <utility>
#include <fstream>
#include <string>
// put other includes here
using namespace std;

// Please fill in your USC username
const string USCusername = "ttrojan";

int maxRollercoasters(vector < pair <int, int> > &RCs)
{
	// YOUR CODE HERE
	return 0;
}

// DO NOT EDIT BELOW THIS LINE

int main(int argc, char *argv[])
{
	vector<pair<int, int> > RCs;

	for (int i = 1; i < (argc + 1) / 2; i++)
	{
		int ti = atoi(argv[2 * i - 1]);
		int fi = atoi(argv[2 * i]);
		RCs.push_back(make_pair(ti, fi));
	}
	int answer = maxRollercoasters(RCs);
	std::ofstream out;
	out.open(USCusername + ".txt", std::ios::app);
	out << answer << endl;
	return 0;
}
