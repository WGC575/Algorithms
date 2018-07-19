#pragma once
/***********************************************************

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

For example, two is written as II in Roman numeral, just two one's added together. Twelve is written as, XII, which is simply X + II. The number twenty seven is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.

Given a roman numeral, convert it to an integer. Input is guaranteed to be within the range from 1 to 3999.

Example 1:

Input: "III"
Output: 3

Example 2:

Input: "IV"
Output: 4

Example 3:

Input: "IX"
Output: 9

Example 4:

Input: "LVIII"
Output: 58
Explanation: C = 100, L = 50, XXX = 30 and III = 3.

Example 5:

Input: "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.


************************************************************/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution 
{
public:
	int romanToInt(string s) {
		int result;
		int pl = 0;
		int mi = 0;
		stack<int> con;
		for (int i = 0; i < s.size(); ++i)
		{
			if (s[i] == 'M')
			{
				if (con.empty()) 
				{
					con.push(1000);
				}
				else if (con.top() >= 1000)
				{
					con.push(1000);
				}
				else
				{
					while (!con.empty() && con.top() < 1000)
					{
						mi += con.top();
						con.pop();
					}
					con.push(1000);
				}
			}
			else if (s[i] == 'D')
			{
				if (con.empty())
				{
					con.push(500);
				}
				else if (con.top() >= 500) 
				{
					con.push(500);
				}
				else 
				{
					while (!con.empty() && con.top() < 500)
					{
						mi += con.top();
						con.pop();
					}
					con.push(500);
				}
			}
			else if (s[i] == 'C')
			{
				if (con.empty())
				{
					con.push(100);
				}
				else if (con.top() >= 100)
				{
					con.push(100);
				}
				else
				{
					while (!con.empty() && con.top() < 100)
					{
						mi += con.top();
						con.pop();
					}
					con.push(100);
				}
			}
			else if (s[i] == 'L')
			{
				if (con.empty())
				{
					con.push(50);
				}
				else if (con.top() >= 50)
				{
					con.push(50);
				}
				else
				{
					while (!con.empty() && con.top() < 50)
					{
						mi += con.top();
						con.pop();
					}
					con.push(50);
				}
			}
			else if (s[i] == 'X')
			{
				if (con.empty())
				{
					con.push(10);
				}
				else if (con.top() >= 10)
				{
					con.push(10);
				}
				else
				{
					while (!con.empty() && con.top() < 10)
					{
						mi += con.top();
						con.pop();
					}
					con.push(10);
				}
			}
			else if (s[i] == 'V')  
			{
				if (con.empty())
				{
					con.push(5);
				}
				else if (con.top() >= 5)
				{
					con.push(5);
				}
				else
				{
					while (!con.empty() && con.top() < 5)
					{
						mi += con.top();
						con.pop();
					}
					con.push(5);
				}
			}
			else if (s[i] == 'I') 
			{
				if (con.empty())
				{
					con.push(1);
				}
				else if (con.top() >= 1)
				{
					con.push(1);
				}
				else
				{
					while (!con.empty() && con.top() < 1)
					{
						mi += con.top();
						con.pop();
					}
					con.push(1);
				}
			}
			else 
			{
				return -1;
			}
			
		}
		while (!con.empty())
		{
			pl += con.top();
			con.pop();
		}
		return (pl - mi);
	}
};