/*
 * main.cpp
 *
 *  Created on: ??þ/??þ/????
 *      Author: Admin
 */


#include"scanner.h"



int main (void){

	string x;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	/*  loop to get the words  from input.txt file and pass it to scanner function  */
	while(cin>>x){
		get_word( x);

	}

	/* for writ the two vectors in output.txt file  */
	for(int i=0;i<t_value.size();i++){

		cout<<t_value[i]<<" , ";
		cout<<t_type[i]<<endl;
	}

	return 0;

}
