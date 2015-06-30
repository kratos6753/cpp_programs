/* Program to convert lengthy urls to 6 character length tiny urls */
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// Function to generate short urls from integer ID
string idToShortURL(long int n)
{
	// Map to store 62 possible characters
	char map[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	string shorturl;

	// Convert integer ID to base 62 number
	while(n)
	{
		// Use above map to store actual character in short url
		shorturl.push_back(map[n%62]);
		n = n/62;
	}

	// Reverse shortURL to complete base conversion
	reverse(shorturl.begin(), shorturl.end());

	return shorturl;
}

// Function to get integer ID back from a short url
long int shortURLtoID(string shortURL)
{
	long int id = 0; // initialize result
	int i;

	// A simple base conversion logic
	for (i = 0; i < shortURL.length(); ++i)
	{
		if ('a' <= shortURL[i] && shortURL[i] <= 'z')
		{
			id = id*62 + shortURL[i] - 'a';
		}
		if ('A' <= shortURL[i] && shortURL[i] <= 'Z')
		{
			id = id*62 + shortURL[i] - 'A' + 26;
		}
		if ('0' <= shortURL[i] && shortURL[i] <= '9')
		{
			id = id*62 + shortURL[i] - '0' + 52;
		}
	}

	return id;
}

// Driver program to test the above function
int main()
{
	int n = 12345;
	string shorturl = idToShortURL(n);
	cout << "Generated short url is " << shorturl << endl;
	cout << "Id from url is " << shortURLtoID(shorturl) << endl;
	return 0;
}