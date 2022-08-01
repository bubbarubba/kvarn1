
#include <iomanip>
#include <iostream>
using namespace std;
#include <vector>
#include <cmath>
int kvarn_exists1(vector <int> koordinater, int V, vector <vector<int>> kvarnar, vector<vector<int>> upkvarnar){
	int value = 0;
	if(kvarnar[V][0] == kvarnar[V][1]){	
		if(kvarnar[V][0] + kvarnar[V][1] + kvarnar[V][2] == 3){
			value = 1;
		}
	if(kvarnar[V][0] + kvarnar[V][1] + kvarnar[V][2] == 6){
		value = 2;
	}
		
	}
	if(upkvarnar[V][0] == upkvarnar[V][1]){	
	if(upkvarnar[V][0] + upkvarnar[V][1] + upkvarnar[V][2] == 3){
		value = 1;
	}
	if(upkvarnar[V][0] + upkvarnar[V][1] + upkvarnar[V][2] == 6){
		value = 2;
	}
		
	}
	return value;
}
vector <vector<int>> rad(vector <int> koordinater){
		vector <int> rad0 {koordinater[18], koordinater[19], koordinater[20]};
		vector <int> rad1 {koordinater[0], koordinater[1], koordinater[2]};
		vector <int> rad2 {koordinater[3], koordinater[4], koordinater[5]};
		vector <int> rad3 {koordinater[6], koordinater[7], koordinater[8]};
		vector <int> rad4{koordinater[9], koordinater[10], koordinater[11]};
		vector <int> rad5 {koordinater[12], koordinater[13], koordinater[14]};
		vector <int> rad6 {koordinater[15], koordinater[16], koordinater[17]};
		vector <int> rad7 {koordinater[21], koordinater[22], koordinater[23]};

		vector <vector<int>> kvarnar{
		rad1, rad1, rad1, rad2, rad2, rad2, rad3, rad3, rad3,rad4, rad4, rad4, rad5, rad5, rad5, rad6, rad6, rad6, rad0, rad0, rad0, rad7, rad7, rad7};
	return kvarnar;
}
vector <vector<int>> uprad(vector <int> koordinater){


		vector <int> rad8 {koordinater[16], koordinater[19], koordinater[22]};
		vector <int> rad9 {koordinater[0], koordinater[9], koordinater[21]};
		vector <int> rad10 {koordinater[1], koordinater[4], koordinater[7]};
		vector <int> rad11 {koordinater[14], koordinater[23], koordinater[2]};
		vector <int> rad12 {koordinater[3], koordinater[10], koordinater[18]};
		vector <int> rad14 {koordinater[5], koordinater[13], koordinater[20]};
		vector <int> rad15 {koordinater[6], koordinater[11], koordinater[15]};
		vector <int> rad16 {koordinater[8], koordinater[12], koordinater[17]};
		vector <vector<int>> upkvarnar{
		rad9, rad10, rad11, rad12, rad10, rad14, rad15, rad10, rad16, rad9, rad12, rad15, rad16, rad14, rad11, rad15, rad8, rad16, rad12, rad8, rad14, rad9, rad8, rad11};
		return upkvarnar;
}
	int main(){
	cout << "om du int vet hur kvarn fungerar fuck off!" <<endl;
	cout << "ah juste kordinaterna funkar så här: högst upp till vänster är 0, sen den högst upp i mitten e 1 osv." <<endl;
	int remove;
	int counter1 = 0;
	int counter2 = 0;
	vector <int> koordinater{
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int V;
	for(int i = 0; i != 18; i++){
		cin >> V;
		cout << "lägg en etta varsomhelst" << endl;
		koordinater[V] += 1;
		cout << koordinater[0] <<"        "<< koordinater[1] <<"        " << koordinater[2] << endl;
		cout <<"    " << koordinater[3] <<"    "<< koordinater[4] << "    " << koordinater[5] << endl;
		cout <<"      "<<koordinater[6] <<"  "<< koordinater[7] << "  " <<  koordinater[8] << endl;
		cout <<  koordinater[9] << "   "<<koordinater[10]<<" " << koordinater[11]  << "     " << koordinater[12] << " "<<koordinater[13] << "   "<<koordinater[14]  << endl;
		cout <<"      "  <<koordinater[15] << "  "<<koordinater[16] << "  "<<koordinater[17]  << endl;
		cout <<"    "<<koordinater[18]  <<"    " << koordinater[19]  << "    "<< koordinater[20]  << endl;
		cout <<  koordinater[21]    << "        "<<  koordinater[22]    <<"        "  << koordinater[23]  << endl;
		if( kvarn_exists1(koordinater, V, rad(koordinater), uprad(koordinater)) == 1){
			cout << "ta bort en tvåa"<< endl;
			cin >> remove;
			cout << "ha! get kvarnad beeeootch" << endl;
			koordinater[remove] -= 2;
			counter1 += 1;
		}
		cout << "var vill du lägga din tvåa?" << endl;
		cin >> V;
		koordinater[V] += 2;
		cout << koordinater[0] <<"        "<< koordinater[1] <<"        " << koordinater[2] << endl;
		cout <<"    " << koordinater[3] <<"    "<< koordinater[4] << "    " << koordinater[5] << endl;
		cout <<"      "<<koordinater[6] <<"  "<< koordinater[7] << "  " <<  koordinater[8] << endl;
		cout <<  koordinater[9] << "   "<<koordinater[10]<<" " << koordinater[11]  << "     " << koordinater[12] << " "<<koordinater[13] << "   "<<koordinater[14]  << endl;
		cout <<"      "  <<koordinater[15] << "  "<<koordinater[16] << "  "<<koordinater[17]  << endl;
		cout <<"    "<<koordinater[18]  <<"    " << koordinater[19]  << "    "<< koordinater[20]  << endl;
		cout <<  koordinater[21]    << "        "<<  koordinater[22]    <<"        "  << koordinater[23]  << endl;
		if(kvarn_exists1(koordinater, V, rad(koordinater), uprad(koordinater)) == 2){
			cout << "ta bort en etta" << endl;
			cin >> remove;
			cout << " fear not you are still in the game player 1 (troligen)" << endl;
			koordinater[remove] -= 1;
			counter2 += 1;
		}
	}
	for(int x = 0; ;x++){
		if(counter1 == 7){
			cout << "bambadabampaow, spelare nr1 vinnnnner!" << endl;
		}else{
			if(counter2 == 7){
				cout << "baaaam och spelare nr1 goeeeeeees doooooooown!" << endl;
			}
				cin >> remove;
				cin >> V;
				koordinater[V] += 2;
				koordinater[remove -=2];
				cout << koordinater[0] <<"        "<< koordinater[1] <<"        " << koordinater[2] << endl;
				cout <<"    " << koordinater[3] <<"    "<< koordinater[4] << "    " << koordinater[5] << endl;
					cout <<"      "<<koordinater[6] <<"  "<< koordinater[7] << "  " <<  koordinater[8] << endl;
				cout <<  koordinater[9] << "   "<<koordinater[10]<<" " << koordinater[11]  << "     " << koordinater[12] << " "<<koordinater[13] << "   "<<koordinater[14]  << endl;
				cout <<"      "  <<koordinater[15] << "  "<<koordinater[16] << "  "<<koordinater[17]  << endl;
				cout <<"    "<<koordinater[18]  <<"    " << koordinater[19]  << "    "<< koordinater[20]  << endl;
				cout <<  koordinater[21]    << "        "<<  koordinater[22]    <<"        "  << koordinater[23]  << endl;
				if(kvarn_exists1(koordinater, V, rad(koordinater), uprad(koordinater)) == 2){
					cout << "ta bort en etta" << endl;
					cin >> remove;
					koordinater[remove] -= 1;
					counter1 += 1;
				}	
				cin >> remove;
				cin >> V;
				koordinater[V] += 1;
				koordinater[remove] -= 1;
				cout << koordinater[0] <<"        "<< koordinater[1] <<"        " << koordinater[2] << endl;
				cout <<"    " << koordinater[3] <<"    "<< koordinater[4] << "    " << koordinater[5] << endl;
				cout <<"      "<<koordinater[6] <<"  "<< koordinater[7] << "  " <<  koordinater[8] << endl;
				cout <<  koordinater[9] << "   "<<koordinater[10]<<" " << koordinater[11]  << "     " << koordinater[12] << " "<<koordinater[13] << "   "<<koordinater[14]  << endl;
				cout <<"      "  <<koordinater[15] << "  "<<koordinater[16] << "  "<<koordinater[17]  << endl;
				cout <<"    "<<koordinater[18]  <<"    " << koordinater[19]  << "    "<< koordinater[20]  << endl;
					cout <<  koordinater[21]    << "        "<<  koordinater[22]    <<"        "  << koordinater[23]  << endl;
				if(kvarn_exists1(koordinater, V, rad(koordinater), uprad(koordinater)) == 1){
					cout << "ta bort en två" << endl;
					cin >> remove;
				koordinater[remove] -= 2;
						counter2 += 1;
				}
			}
	}
	}
	




	


