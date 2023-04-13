/* 

rock, paper, scissors, lizard, spock varient of the rock, paper, scissors game. 

scissors cuts paper, paper covers rock, rock crushes lizard, lizard poisons spock, spock smashes scissors, scissors decapites lizard, lizard eats paper, paper disproves spock, spock vaporizes rock, rock also can destroy scissors. 

scissors > paper;
paper > rock;
rock > lizard;
lizard > spock;
spock > scissors;
scissors > lizard;
lizard > paper;
paper > spock;
spock > rock;
rock > scissors;

*/
#include<iostream>
#include<stdlib.h>

int main(){
  srand(time(NULL));

  int computer = rand() %3 +1;

  int user = 0;

  std::cout << "**********\n";
  std::cout << "Please select an option\n";
  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";
  std::cout << "4) Lizard\n";
  std::cout << "5) Spock\n";
  std::cout << "**********\n";
compute1:
  std::cout << "\n";
  std::cin >> user;
  std::cout << "\n";

  switch(user){
    case 1:
    if(computer == 4 || computer == 3){
      std::cout << "Player wins!\n";
      std::cout << "Computer chose: " << computer << "\n";
    }else if (computer == 2 || computer == 5){
      std::cout << "Computer wins!\n";
      std::cout << "Computer chose: " << computer << "\n";
    }else{
      std::cout << "Draw";
    }
    break;
    case 2:
    if(computer == 1 || computer == 5){
      std::cout << "Player wins!\n";
      std::cout << "Computer chose: " << computer << "\n";
    }else if (computer == 4 || computer == 3){
      std::cout << "Computer wins!\n";
      std::cout << "Computer chose: " << computer << "\n";
    }else{
      std::cout << "Draw!";
    }
    break;
    case 3:
    if (computer == 2 || computer == 4 ){
      std::cout << "Player wins!\n";
      std::cout << "Computer chose: " << computer << "\n";
    }else if (computer == 1 || computer == 5){
      std::cout << "Computer wins!\n";
      std::cout << "Computer chose: " << computer << "\n";
    }else{
      std::cout << "Draw!";
    }
    break;
    case 4:
    if (computer == 2 || computer == 5){
      std::cout << "Player wins!\n";
      std::cout << "Computer chose: " << computer << "\n";
    }else if (computer == 3 || computer == 1){
      std::cout << "Computer wins!\n";
      std::cout << "Computer chose: " << computer << "\n";
    }else{
      std::cout << "Draw!";
    }
    break;
    case 5:
    if (computer == 1 || computer == 3){
      std::cout << "Player wins!\n";
      std::cout << "Computer chose: " << computer << "\n";
    }else if (computer == 2 || computer == 4){
      std::cout <<"Computer wins!\n";
      std::cout << "Computer chose: " << computer << "\n";
    }else{
      std::cout << "Draw!";
    }
    break;
    default:
    std::cout<< "Invalid response, please try again.";
    goto compute1;
  }


  // if (user < 1 || user >3){
  //   std::cout << "invalid input, please try again\n";
  //   goto compute1;
  // }else if(computer > user){
  //   std::cout << "Player wins!";
  // }else if (computer < user){
  //   std::cout << "Computer wins!";
  // }else if(computer == user){
  //   std::cout << "Draw!";
  // }else{
  //   std::cout << "invalid input, please try again.";
  //   goto compute1;
  // }




}
