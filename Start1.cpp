#include "Class2.h"
#include "pch.h"
#include <iostream>
#include <cmath>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main() {

	double x1, x2, y1, y2, y3, x3, result, P05;
	double AB, BC, CA;

			cout << "input coords of X" << endl;
				cin >> x1; cin >> y1;
			cout << "input coords of Y" << endl;
				cin >> x2; cin >> y2;
			cout << "input coords of Z" << endl;
				cin >> x3; cin >> y3;

			//x1 = -1; y1 = 0;
			//x2 = 0; y2 = 3;			//already done
			//x3 = 2; y3 = 0;

			 double ab = pow((x2 - x1),2)  + pow((y2 - y1), 2);
			 AB = sqrt(ab);
			 cout << AB << "    ";

			 double bc = pow(x3 - x2, 2) + pow(y3 - y2, 2);
			 BC = sqrt(bc);
			 cout << BC << "    ";

			 double ca = pow(x1 - x3, 2) +pow(y1 - y3, 2);
			 CA = sqrt(ca);
			 cout << CA << "    "<< endl;

			P05 = 0.5*(AB + BC + CA);
			result = (sqrt(P05*(P05 - AB)*(P05 - BC)*(P05 - CA)));
			cout << "Answer " << result << endl;


	return 0;
}

	