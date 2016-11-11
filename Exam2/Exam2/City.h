#pragma once
#include <vector> 

class increasePopulation {
public:
	
	int id;
	string citizen;
	string data;
	string cityName;
	string location;
};

class City
{
private:
	
	vector <increasePopulation*> population;
	

public:
 
	//Creates a new city with the given name//
	City(string cityName);

	~City() {
		retrieveCitizenData();
	}
	
	//City destructor//
	~City() {
		for (int i = 0; i < population.size(); i++) {
			increasePopulation* d = population.at(i);
			delete d;
		}
	}

	void retrieveCitizenData() {
		ifstream cid("Citizens.dat");
		if (!cid.fail()) {
			string info;
			while (getinfo(cid, info)) {
				int pos = info.find(':');
				string 	info.substr(0, pos);

				string data = info.substr(0, pos);

				string id = info.substr(pos + 1, info.length() - pos - 1);
			}
		}
		cid.close();
	}
	//Returns name of the city//
	string getCityName(string cityName){
	
			return stoi(cityName.at(i))->City);
		}
	}
	return 0;

	//Returns the number of citizens in the city//
	Citizen* getCitizenAtIndex(int index){
	return stoi(data.at(i))->index);
	//Adds citizen to city//
	void addCitizenWithId() {
		ofstream citizens("Citizens.dat");
		if (!citizens.fail()) {
			for (int i = 0; i < population.size(); i++) {
				citizens << population.at(i)-> citizen << "." << population.at(i) -> id << endl;
			}
		}
}


	//Returns the citizen with the given ID//
	Citizen* getCitizenWithId(int id) {

		return stoi(id.at(i))->Citizen);
	}

	//Returns a vector of citizens with identical favorite colors//
	vector <Citizen*> getCitizensForFavoriteColor(string color) {
		return stoi(color.at(i))->Citizen);
	}
};