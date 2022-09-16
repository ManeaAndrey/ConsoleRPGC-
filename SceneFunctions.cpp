#include "SceneFunctions.h"

void Title()
{
	std::cout << R"(              ('-.     _ .-') _  _  .-')                      .-') _                       .-') _                   ('-.         .-') _  .-') _      ('-.      .-')               ('-.                
    .-.      ( OO ).-.( (  OO) )( \( -O )                    (  OO) )                     ( OO ) )                 ( OO ).-.    ( OO ) )(  OO) )    ( OO ).-. ( OO ).            ( OO ).-.    .-.     
 .-,| |,-.   / . --. / \     .'_ ,------.  ,-.-')    ,------./     '._         ,-.-') ,--./ ,--,'          ,------./ . --. /,--./ ,--,' /     '._   / . --. /(_)---\_)  ,-.-')   / . --. / .-,| |,-.  
 _\ ' ' /_   | \-.  \  ,`'--..._)|   /`. ' |  |OO)('-| _.---'|'--...__)        |  |OO)|   \ |  |\       ('-| _.---'| \-.  \ |   \ |  |\ |'--...__)  | \-.  \ /    _ |   |  |OO)  | \-.  \  _\ ' ' /_  
(__     __).-'-'  |  | |  |  \  '|  /  | | |  |  \(OO|(_\    '--.  .--'        |  |  \|    \|  | )      (OO|(_\  .-'-'  |  ||    \|  | )'--.  .--'.-'-'  |  |\  :` `.   |  |  \.-'-'  |  |(__     __) 
  / . . \   \| |_.'  | |  |   ' ||  |_.' | |  |(_//  |  '--.    |  |           |  |(_/|  .     |/       /  |  '--.\| |_.'  ||  .     |/    |  |    \| |_.'  | '..`''.)  |  |(_/ \| |_.'  |  / . . \   
 `-'| |`-'   |  .-.  | |  |   / :|  .  '.',|  |_.'\_)|  .--'    |  |          ,|  |_.'|  |\    |        \_)|  .--' |  .-.  ||  |\    |     |  |     |  .-.  |.-._)   \ ,|  |_.'  |  .-.  | `-'| |`-'  
    `-'      |  | |  | |  '--'  /|  |\  \(_|  |     \|  |_)     |  |         (_|  |   |  | \   |          \|  |_)  |  | |  ||  | \   |     |  |     |  | |  |\       /(_|  |     |  | |  |    `-'     
             `--' `--' `-------' `--' '--' `--'      `--'       `--'           `--'   `--'  `--'           `--'    `--' `--'`--'  `--'     `--'     `--' `--' `-----'   `--'     `--' `--'            )" << "\n";
}

bool Intro()
{
	bool start = true;
	char input;
	do {
	std::cout << R"(A moonless night descends upon the remote village of Kulm.

With a colossal mountain range at its back and an ancient forest encircling the rest of it, the already remote village is completely isolated from the rest of the empire.
Unconcerned with the world at large, omitted from every official map and far away from any established trade routes, Kulm quietly sleeps.
It rests devoid of the distinctive murmur of a tired village. No drunken laughter after a day of hard work, no children play still filled with energy, the settlement is seemingly abandoned.
Stranger still is the absence of critters chittering, nocturnal birds do not sing and even the leaves dare not rustle in the wind.
Tonight Kulm basks in its sacred oppressive silence as it did countless nights before.

But suddenly, a heretical sound dispels the illusion, a blood - curdling scream erupts and fills the village followed by the trample of hoves.
A man rides away from the village and into the forest, eyes are crazed with fear as he desperately hurries a horse that can't go any faster. 
His pointy hat bears the emblem of the Merchants Guild, the culmination of all his life work, a status symbol he was prepared to take another's life to keep in his position. 
But as it flies away he does not risk even a glance in its direction.
As the rider delves deeper into the forest, the village returns to silence outwardly unchanged but since time immemorial, tonight news escaped Kulm.)" << "\n";

	std::cout << "As consequence of that night, two extraordinary people will embark on a journey to Kulm to uncover its mysteries.\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "Embark on that Journey ?\n";
	std::cout << "Press 1 for 'Yes' and 0 for 'No'\n";
	std::cin >> input;	
		switch (input) {
		case'0':start = 0;
			break;
		case'1':start = 1;
			break;
		default:std::cout << "Invalid choice, try again.";
		}
	} while (!(input == '0') && !(input == '1'));
	return start;
}

bool ChoseClass()
{
	bool PlayerClass=true;
	char input;
	do {
		std::cout << "\n";
		std::cout << "\n";
		std::cout << R"(Priest of the Hawk:
There are countless religions in the empire and while the Church of the Hawk is its newest faith the speed at which the newly formed cult expands is unprecedented in known history.
The Church owes its rapid rise in popularity to a single event seven years ago dubbed "the Awakening", a vision shared simultaneously by every citizen in the empire or if the Holy Hawk priesthood is to be believed, the world.
In this vision, the figure that will be known as the Hawk appears like a beautiful knight in alabaster white armor and wings of pure light in the midst of an all encroaching darkness. 
The Hawk speaks few words during the Awakening, warning that the "Age of Strife" will arrive, a period of unprecedented devastation but also offering hope and the promise of salvation to whoever will choose to swear their lives to him. 
The followers of the Hawk debate endlessly the few words spoken in the vision but the feelings of hope and safety that the figure instilled them with are ubiquitous. 
In those moments the figure was their father, their king, and their God all at once.

As unusual as the birth of the new religion is so are its Priests. The figure of the Hawk with its androgynous beauty inspired both men and women to dawn the white robes of priesthood. 
As opposed to most priests of other cults the Hawk's order are trained in combat and armed with the rapier, the weapon of choice the Hawk wielded during the Awakening.
They travel the land not to spread the word of their God, that mission meaningless after the Awakening, but to follow its example, to protect, to lead, and ultimately save.
Be it settling a feud of two families or leading a village defense against a gang of bandits the Priests of the Hawk will nobly serve mankind until the King-God arrives to take its rightful place.)" << "\n";
		std::cout << "\n";
		std::cout << "\n";
		std::cout << "\n";
		std::cout << "\n";
		std::cout << R"(Royal Alchemist:
The prestigious Royal Academy resides in the city of Weissenburg and while the Palace of Roderick the third, is the greatest structure in the city, few would contest the Academy is the most important.
While more masters were created in the halls of the famous institution than in any other place of learning that alone is not the reason for its legendary status. 
The monolithic structure known by most only as "the Academy" is the only place in the empire one can aspire to become an Alchemist. 
Common knowledge says that the Academy is the only location where all the many scientific subjects required for the training of an Alchemist are taught, its libraries and vaults of secrets making everything else wilt in comparison.
The truth is simpler, only the Royal treasury in tandem with ancient treaties facilitates the teachings of alchemical philosophy to its students. 
An Alchemist is instructed not to use their mastery of chemistry to make medicine nor their knowledge of Architecture to build bridges. 
Instead, an Alchemist must dedicate the entirety of their time to improve upon what is known, dispelling superstition, myth, and ultimately conquering magic.

Of all the paths the Academy offers, the one of the Alchemist is the hardest and most dangerous, with only eight percent of apprentices ever reaching the rank of Master.
While the general difficulty of the subjects and the odd lab explosion contribute to the low numbers of graduates the main reason is undeniably the practice of what is called "The Pilgrimage".
Eager to take advantage of the unique mix of youthful strength and knowledge of their apprentices the Master Alchemists require of all under their wing to embark on dangerous and often years-long research journeys known as the Pilgrimage 
Though not trained for combat any rogue seeing nothing but an easy prey in the bookworms on their travels is in for a rude awakening.      
Far from harmless the young men and women carry besides their ceremonial Alchemist knife a wide array of mixtures from the poisonous to the explosive.
Impatient to make their contribution the Alchemists dive into the dangerous waters of the unknown time and time again, risking life and limb to bring back a morsel of knowledge to their mentors.)" << "\n";
		std::cout << "\n";
		std::cout << "\n";
		std::cout << "Chose your Character:\n";
		std::cout << "Press '0' for the Royal Alchemist and '1' for the Priest of the Hawk\n";
		std::cin >> input;
		switch (input) {
		case'0':PlayerClass = 0;
			break;
		case'1':PlayerClass = 1;
			break;
		default:std::cout << "Invalid choice, try again.";
		}
		
	} while (!(input == '0') && !(input == '1'));
	return PlayerClass;
}

void PlaysoundIntro()
{
	PlaySound(TEXT("B_Song"), NULL, SND_ASYNC);

}

void Playsound1()
{
	PlaySound(NULL, 0, 0);
	PlaySound(TEXT("Main_Menu"), NULL, SND_ASYNC);
}

void Playsound2()
{
	
	 PlaySound(NULL, 0, 0);
	 PlaySound(TEXT("Exploring"), NULL, SND_ASYNC);
	
}




char ChoseDirection(std::string PlayerName)
{
	char input;
	do
	{
		std::cout << "You're at a crossroad, the road splits in three. Chose your destination:\n";
		std::cout << "Press '1' for the Mountain\n";
		std::cout << "Press '2' for the Forrest\n";
		std::cout << "Press '3' for the City\n";
		std::cin >> input;
		
		switch (input) {
		case '1':
			std::cout << PlayerName << " Travels to the Mountain\n";
			break;
		case '2':
			std::cout << PlayerName << " Travels to the Forrest\n";
			break;
		case '3':
			std::cout << PlayerName << " Travels to the City\n";
			break;
		default:
			std::cout << "Invalid choice, try again\n";
		}
	} while (!(input=='1')&&!(input=='2')&&!(input=='3'));
	return input;
}

void CreateAlchemistMasterNPC(NPC* AlchemistMaster) {
	std::string Name = "Master Ludwig";
	AlchemistMaster->setNpcName(Name);
	std::string Intro="Why do you bother me, aprentice?";
	std::string Outro="Get back to your work!";
	AlchemistMaster->setIntro(Intro);
	AlchemistMaster->setOutro(Outro);
	std::string description = "A tall and gaunt man with a permanent frown plastered on his wrinkly face.";
	std::vector<std::vector<std::string>> dialogue = { { "0-What is your role here?","1-Can you help me with this recipe?","2-Tell me more about the Pilgrimage","3-Goodbye master"},
	{"Testing the dialogue","Aw heeel naw!","didn't you read the intro ?"}};
	AlchemistMaster->setdialogue(dialogue);


}
void Continue() {
	
	std::cout << "Press Enter to continue: ";
	std::cin.get();
	std::cin.ignore();
}

void Failed()
{

	std::cout << R"(
                                      (`-')  _    (`-')  (`-')  _     _(`-')    (`-')  _(`-')  _ _(`-')       ,---.    
     .->        .->        .->        (OO ).-/ <-.(OO )  ( OO).-/    ( (OO ).-> ( OO).-/(OO ).-/( (OO ).->    |   |    
 ,--.'  ,-.(`-')----. ,--.(,--.       / ,---.  ,------,)(,------.     \    .'_ (,------./ ,---.  \    .'_     |   |    
(`-')'.'  /( OO).-.  '|  | |(`-')     | \ /`.\ |   /`. ' |  .---'     '`'-..__) |  .---'| \ /`.\ '`'-..__)    |   |    
(OO \    / ( _) | |  ||  | |(OO )     '-'|_.' ||  |_.' |(|  '--.      |  |  ' |(|  '--. '-'|_.' ||  |  ' |    |  .'    
 |  /   /)  \|  |)|  ||  | | |  \    (|  .-.  ||  .   .' |  .--'      |  |  / : |  .--'(|  .-.  ||  |  / :    `--'     
 `-/   /`    '  '-'  '\  '-'(_ .'     |  | |  ||  |\  \  |  `---.     |  '-'  / |  `---.|  | |  ||  '-'  /    .--.     
   `--'       `-----'  `-----'        `--' `--'`--' '--' `------'     `------'  `------'`--' `--'`------'     `--')" << "\n";
 std::cout << R"(
                 ___-----------___
           __--~~                 ~~--__
       _-~~                             ~~-_
    _-~                                     ~-_
   /                                           \
  |                                             |
 |                                               |
 |                                               |
|                                                 |
|                                                 |
|                                                 |
 |                                               |
 |  |    _-------_               _-------_    |  |
 |  |  /~         ~\           /~         ~\  |  |
  ||  |             |         |             |  ||
  || |               |       |               | ||
  || |              |         |              | ||
  |   \_           /           \           _/   |
 |      ~~--_____-~    /~V~\    ~-_____--~~      |
 |                    |     |                    |
|                    |       |                    |
|                    |  /^\  |                    |
 |                    ~~   ~~                    |
  \_         _                       _         _/
    ~--____-~ ~\                   /~ ~-____--~
         \     /\                 /\     /
          \    | ( ,           , ) |    /
           |   | (~(__(  |  )__)~) |   |
            |   \/ (  (~~|~~)  ) \/   |
             |   |  [ [  |  ] ]  /   |
              |                     |
               \                   /
                ~-_             _-~
                   ~--___-___--~)" << "\n";
 std::cout << std::endl;
 std::cout << std::endl;
 std::cout << std::endl;

	Continue();
	exit(1);

}







