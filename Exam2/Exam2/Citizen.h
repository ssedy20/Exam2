#pragma once
#include <vector>
class creatingCitizen {
public: 
		int id;
		string firstName;
		string lastName;
		string color;
		string data;


};
class Citizen
{
private:
	vector<creatingCitizen*> create;
public:


	/*Creates a new Citizen object with the passed in
	id, name, and favorite color
	Once a citizen is created, you can't change their id or name
	but you can change their favorite color */
	Citizen::Citizen(int id, string firstName, string lastName, string color)
	{
		creatingCitizen* newCitizen = new Citizen;
		newCitizen->id = id;
		newCitizen->firstName = firstName;
		newCitizen->lastName = lastName;
		newCitizen->color = color;
		this->citizens.push_back(newCitizen);
	}

}

	/*Creates a new Citizen object by copying data from the 
	passed in citizen */    
	Citizen(Citizen* citizen);   
	
	//Returns the first name of this citizen//
	string getFirstName(string firstName){
		for (int i = 0; < population.size(); i++) {
			if (data.at(i)->firstName == firstName) {
				return stoi(data.at(i))->population);
			}
		}
		return 0;
	
	//Returns the last name of this citizen//
		string getLastName(string lastName) {
			for (int i = 0; < population.size(); i++) {
				if (data.at(i)->lastName == ;as stName) {
					return stoi(data.at(i))->population);
				}
			}
			return 0;
	}
	
	//Returns the id for this citizen//  
		int getId(int id) {
			for (int i = 0; < population.size(); i++) {
				if (data.at(i)->id == id) {
					return stoi(data.at(i))->population);
				}
			}
			return 0;
	}
	
	//Returns the favorite color for this citizen// 
		string getFavoriteColor(string color) {
			for (int i = 0; < population.size(); i++) {
				if (data.at(i)->color == color) {
					return stoi(data.at(i))->population);
				}
			}
			return 0;
	}
	
	//Sets the favorite color for this citizen // 
		void setFavoriteColor(string color) {
			bool newFavorite = false;
			for (int i = 0l i < color.data(); i++) {
				if color.at(i)->Citizen = std::to_string(Citizen);
			}
	}
		if (!newFavorite)
		{
			creatingCitizen* Favoritecolor = new Favoritecolor;
			Favoritecolor->Citizen = Citizen;
			this->color.push_back(Favoritecolor);
		}
};