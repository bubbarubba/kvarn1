# kvarn1
 kvarn
#include <iomanip>
#include <iostream>
using namespace std;
#include <vector>
#include <cmath>
int kvarn_exists1(vector <int> koordinater, int V){
	int value = 0;	
	if(){
		value = 1;
	}else{
		if(){
			value = 2;
					}
			
				}				
	return value;}
	main(){
	int remove;
	vector <int> koordinater{
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int V;
	for(int i = 0; i != 18; i++){
		cin >> V;
		koordinater[V] += 1;
		cout << koordinater[0] <<"        "<< koordinater[1] <<"        " << koordinater[2] << endl;
		cout <<"    " << koordinater[3] <<"    "<< koordinater[4] << "    " << koordinater[5] << endl;
		cout <<"      "<<koordinater[6] <<"  "<< koordinater[7] << "  " <<  koordinater[8] << endl;
		cout <<  koordinater[9] << "   "<<koordinater[10]<<" " << koordinater[11]  << "     " << koordinater[12] << " "<<koordinater[13] << "   "<<koordinater[14]  << endl;
		cout <<"      "  <<koordinater[15] << "  "<<koordinater[16] << "  "<<koordinater[17]  << endl;
		cout <<"    "<<koordinater[18]  <<"    " << koordinater[19]  << "    "<< koordinater[20]  << endl;
		cout <<  koordinater[21]    << "        "<<  koordinater[22]    <<"        "  << koordinater[23]  << endl;
		if( kvarn_exists1(koordinater, V) == 1){
			cout << "ta bort"<<endl;
			cin >> remove;
			koordinater[remove] -= 2;
		}

		cin >> V;
		koordinater[V] += 2;
		cout << koordinater[0] <<"        "<< koordinater[1] <<"        " << koordinater[2] << endl;
		cout <<"    " << koordinater[3] <<"    "<< koordinater[4] << "    " << koordinater[5] << endl;
		cout <<"      "<<koordinater[6] <<"  "<< koordinater[7] << "  " <<  koordinater[8] << endl;
		cout <<  koordinater[9] << "   "<<koordinater[10]<<" " << koordinater[11]  << "     " << koordinater[12] << " "<<koordinater[13] << "   "<<koordinater[14]  << endl;
		cout <<"      "  <<koordinater[15] << "  "<<koordinater[16] << "  "<<koordinater[17]  << endl;
		cout <<"    "<<koordinater[18]  <<"    " << koordinater[19]  << "    "<< koordinater[20]  << endl;
		cout <<  koordinater[21]    << "        "<<  koordinater[22]    <<"        "  << koordinater[23]  << endl;
		if(kvarn_exists1(koordinater, V) == 2){
			cin >> remove;
			koordinater[remove] -= 1;
		}	
	}
}