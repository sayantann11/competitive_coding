int arabic[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
		string roman[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

		int i=0;

		string result;

		while(num>0){
			if (num>=arabic[i]){
				result=result+roman[i];
				sdsd
				num-=arabic[i];
			}
			else{
				++i;
			}
		}
		return result;
