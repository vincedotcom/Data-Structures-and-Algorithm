#include <iostream>
#include <string>

using namespace std;

class Hero {
	public:
		string heroName;
		int heroLevel;
		string role;
		
		
	void assignHeroStats(string name, int level, string role) {
		heroName = name;
		heroLevel = level;
		this->role = role;
	}
	int levelUp(char improve) {
		if (improve == 'y' || improve == 'Y') {
			heroLevel += 1;
			return heroLevel;
		} else if (improve == 'n' || improve == 'N') {
			return heroLevel;
		}
	}

}; 


int main() {
	char levelUp; 
	
	Hero newHero;
	
	cout << "hero name: ";
	cin >> newHero.heroName;
	
	cout << "hero level: ";
	cin >> newHero.heroLevel;
	
	cout << "hero role: ";
	cin >> newHero.role;
	
	cout << "Do you wish to level-up? ";
	cin >> levelUp;
	
	cout << newHero.levelUp(levelUp) << endl;
	
	cout << "Welcome player "<< newHero.heroName;
	
	return 0;
}
