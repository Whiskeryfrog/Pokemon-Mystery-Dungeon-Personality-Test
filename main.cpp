#include <iostream>
#include <stdlib.h>

using namespace std;

void intro(){
    string a;
    char pressz;
    cout<<"****************************************************************************************************************"<<endl;
    cout<<"|                                                 Welcome to the                                               |"<<endl;
    cout<<"****************************************************************************************************************"<<endl;

    cout<<"                          _______  _______  ___   _  _______  __   __  _______  __    _ "<<endl;
    cout<<"                         |       ||       ||   | | ||       ||  |_|  ||       ||  |  | |"<<endl;
    cout<<"                         |    _  ||   _   ||   |_| ||    ___||       ||   _   ||   |_| |"<<endl;
    cout<<"                         |   |_| ||  | |  ||      _||   |___ |       ||  | |  ||       |"<<endl;
    cout<<"                         |    ___||  |_|  ||     |_ |    ___||       ||  |_|  ||  _    |"<<endl;
    cout<<"                         |   |    |       ||    _  ||   |___ | ||_|| ||       || | |   |"<<endl;
    cout<<"                         |___|    |_______||___| |_||_______||_|   |_||_______||_|  |__|"<<endl;
    cout<<"****************************************************************************************************************"<<endl;
    cout<<"|                                        Mystery Dungeon Personality test                                      |"<<endl;
    cout<<"****************************************************************************************************************"<<endl;
    cout<<""<<endl;
    cout<<"--------------------------------------------------Press z to Start----------------------------------------------"<<endl;
    start:
    cin>>pressz;
    switch(pressz){
        case 'z':
        goto thegame;
        break;
        default :
        cout<<"                                             You pressed the wrong button                                       "<<endl;
        goto start;

    }
    thegame:
    return;
}
void story(){
     char ent;
     string ready;

     cout<<"                                            Press any button to proceed."<<endl;
     cin>>ent;
       system("clear");
     cout<<"                                                      Welcome!"<<endl;
     cin>>ent;
       system("clear");
     cout<<"                                                  ooo OOO OOO ooo"<<endl;
     cout<<"                                              oOO                 OOo"<<endl;
     cout<<"                                          oOO                         OOo"<<endl;
     cout<<"                                       oOO                               OOo"<<endl;
     cout<<"                                     oOO                                   OOo"<<endl;
     cout<<"                                   oOO                                       OOo"<<endl;
     cout<<"                                  oOO                                         OOo"<<endl;
     cout<<"                                 oOO                                           OOo"<<endl;
     cout<<"                                oOO                                             OOo"<<endl;
     cout<<"                                oOO                                             OOo"<<endl;
     cout<<"                                oOO                                             OOo"<<endl;
     cout<<"                                oOO                                             OOo"<<endl;
     cout<<"                                oOO                                             OOo"<<endl;
     cout<<"                                 oOO                                           OOo"<<endl;
     cout<<"                                  oOO                                         OOo"<<endl;
     cout<<"                                   oOO                                       OOo"<<endl;
     cout<<"                                     oOO                                   OOo"<<endl;
     cout<<"                                       oO                                OOo"<<endl;
     cout<<"                                          oOO                         OOo"<<endl;
     cout<<"                                              oOO                 OOo"<<endl;
     cout<<"                                                  ooo OOO OOO ooo"<<endl;
     cout<<"                                 This is the portal that leads to the world of Pokémon"<<endl;
     cin>>ent;
       system("clear");
     cout<<"                             But before I let you through, I have several questions for you"<<endl;
     cin>>ent;
       system("clear");
     cout<<"                                          I want you to answer them sincerely"<<endl;
     cin>>ent;
       system("clear");
     cout<<"                                                    Are you ready?"<<endl;
     cout<<"                                             (Type-in READY to continue)"<<endl;
     bruh:
     cin>>ready;
     while (ready=="READY" || ready=="ready")
     {
        cout<<"                                                          Okay..."<<endl;
        goto next;
     }
     cout<<"                                                  Hmmmmmmmmmmmmmmmm..."<<endl;
     goto bruh;
     next:
     return;
}
void question(){
    string ent1;
    char quest[15];
    int personality = 0;

    cout<<"                                                 Let the interview begin!          "<<endl;
    cin>>ent1;
      system("clear");
    cout<<"                                   It's the summer holiday! Where would you like to go?"<<endl;
    cout<<"                                                          A.) Beach"<<endl;
    cout<<"                                                          B.) Spa"<<endl;
    cout<<"                                                          C.) Anywhere"<<endl;
    back1:
    cin>>quest[0];//question number 1
      system("clear");
    switch(quest[0]){
        case 'A':
        case 'a':
       personality+=90;
        goto next1;
        break;
        case 'B':
        case 'b':
       personality+=50;
        goto next1;
        break;
        case 'C':
        case 'c':
       personality+=80;
        goto next1;
        break;
        default:
        goto back1;
    }
    next1:
    cout<<"                                   Do you feel lonesome when you are alone?"<<endl;
    cout<<"                                                          A.) Yes"<<endl;
    cout<<"                                                          B.) No"<<endl;
    back2:
    cin>>quest[1];// question number 2
      system("clear");
    switch(quest[1]){
    case 'A':
    case 'a':
    personality+=60;
    goto next2;
    break;
    case 'B':
    case 'b':
    personality+=100;
    goto next2;
    break;
    default:
    goto back2;
    }
    next2:
    cout<<"                                   There is a bucket. If you put water in it, how much will you fill it?"<<endl;
    cout<<"                                                          A.) Full"<<endl;
    cout<<"                                                          B.) Half"<<endl;
    cout<<"                                                          C.) A little"<<endl;
    back3:
    cin>>quest[2];// question number 3
      system("clear");
    switch(quest[2]){
    case 'A':
    case 'a':
    personality+=110;
    goto next3;
    break;
    case 'B':
    case 'b':
    personality+=50;
    goto next3;
    break;
    case 'C':
    case 'c':
    personality+=80;
    goto next3;
    break;
    default:
    goto back3;
    }
    next3:
    cout<<"                                   How quickly do you respond to a text?"<<endl;
    cout<<"                                                          A.) Reply right away"<<endl;
    cout<<"                                                          B.) May replay, may not"<<endl;
    cout<<"                                                          C.) Too much trouble"<<endl;
    cout<<"                                                          D.) I don't get texted often"<<endl;
    back4:
    cin>>quest[3];// question number 4
      system("clear");
    switch(quest[3]){
    case 'A':
    case 'a':
    personality+=120;
    goto next4;
    break;
    case 'B':
    case 'b':
    personality+=80;
    goto next4;
    break;
    case 'C':
    case 'c':
    personality+=100;
    goto next4;
    break;
    case 'D':
    case 'd':
    personality+=10;
    goto next4;
    break;
    default:
    goto back4;
    }
    next4:
    cout<<"                                   Do you like to fight?"<<endl;
    cout<<"                                                          A.) Yes"<<endl;
    cout<<"                                                          B.) No"<<endl;
    back5:
    cin>>quest[4];// question number 5
      system("clear");
    switch(quest[4]){
    case 'A':
    case 'a':
    personality+=70;
    goto next5;
    break;
    case 'B':
    case 'b':
    personality+=10;
    goto next5;
    break;
    default:
    goto back5;
    }
    next5:
    cout<<"                                   Do you have the feeling that you've slowed down lately?"<<endl;
    cout<<"                                                          A.) Yes"<<endl;
    cout<<"                                                          B.) No"<<endl;
    back6:
    cin>>quest[5];// question number 6
      system("clear");
    switch(quest[5]){
    case 'A':
    case 'a':
    personality+=20;
    goto next6;
    break;
    case 'B':
    case 'b':
    personality+=120;
    goto next6;
    break;
    default:
    goto back6;
    }
    next6:
    cout<<"                                   Grab any digit on your left hand with your right hand."<<endl;
    cin>>ent1;
    cout<<"                                                       Which digit did you grab?"<<endl;
    cout<<"                                                          A.) Thumb"<<endl;
    cout<<"                                                          B.) Index finger"<<endl;
    cout<<"                                                          C.) Middle finger"<<endl;
    cout<<"                                                          D.) Ring finger"<<endl;
    cout<<"                                                          E.) Little finger"<<endl;
    back7:
    cin>>quest[6];// question number 7
      system("clear");
    switch(quest[6]){
    case 'A':
    case 'a':
    personality+=60;
    goto next7;
    break;
    case 'B':
    case 'b':
    personality+=120;
    goto next7;
    break;
    case 'C':
    case 'c':
    personality+=90;
    goto next7;
    break;
    case 'D':
    case 'd':
    personality+=100;
    goto next7;
    break;
    case 'E':
    case 'e':
    personality+=10;
    goto next7;
    break;
    default:
    goto back7;
    }
    next7:
    cout<<"                                   Your friend is being bullied! What do you do?"<<endl;
    cout<<"                                                          A.) Face up to the bully."<<endl;
    cout<<"                                                          B.) Caution the bully from afar."<<endl;
    cout<<"                                                          C.) Heckle the bully from behind"<<endl;
    cout<<"                                                          D.) I don't have any friends"<<endl;
    back8:
    cin>>quest[7];// question number 8
      system("clear");
    switch(quest[7]){
    case 'A':
    case 'a':
    personality+=130;
    goto next8;
    break;
    case 'B':
    case 'b':
    personality+=60;
    goto next8;
    break;
    case 'C':
    case 'c':
    personality+=130;
    goto next8;
    break;
    case 'D':
    case 'd':
    personality+=10;
    goto next8;
    break;
    default:
    goto back8;
    }
    next8:
    cout<<"                                   A delinquent is hassling a girl on a busy street! What will you do?"<<endl;
    cout<<"                                                          A.) Help without hesitation."<<endl;
    cout<<"                                                          B.) Help, even if scared."<<endl;
    cout<<"                                                          C.) Call the police."<<endl;
    cout<<"                                                          D.) Do nothing out of fear."<<endl;
    cout<<"                                                          E.) I am scared of the delinquent and the girl"<<endl;
    back9:
    cin>>quest[8];// question number 9
      system("clear");
    switch(quest[8]){
    case 'A':
    case 'a':
    personality+=130;
    goto next9;
    break;
    case 'B':
    case 'b':
    personality+=110;
    goto next9;
    break;
    case 'C':
    case 'c':
    personality+=40;
    goto next9;
    break;
    case 'D':
    case 'd':
    personality+=60;
    goto next9;
    break;
    case 'E':
    case 'e':
    personality+=10;
    goto next9;
    break;
    default:
    goto back9;
    }
    next9:
    cout<<"                                   Do you like to noisily enjoy yourself with others?"<<endl;
    cout<<"                                                          A.) Yes."<<endl;
    cout<<"                                                          B.) No. "<<endl;
    back10:
    cin>>quest[9];// question number 10
      system("clear");
    switch(quest[9]){
    case 'A':
    case 'a':
    personality+=10;
    goto next10;
    break;
    case 'B':
    case 'b':
    personality+=60;
    goto next10;
    break;
    default:
    goto back10;
    }
    next10:
    cout<<"                                   A test is coming up. How do you study for it?"<<endl;
    cout<<"                                                          A.) Study hard."<<endl;
    cout<<"                                                          B.) At the last second. "<<endl;
    cout<<"                                                          C.) Ignore it and play. "<<endl;
    back11:
    cin>>quest[10];// question number 11
      system("clear");
    switch(quest[10]){
    case 'A':
    case 'a':
    personality+=110;
    goto next11;
    break;
    case 'B':
    case 'b':
    personality+=20;
    goto next11;
    break;
    case 'C':
    case 'c':
    personality+=70;
    goto next11;
    break;
    default:
    goto back11;
    }
    next11:
    cout<<"                                   Can you go into a haunted house?"<<endl;
    cout<<"                                                          A.) No problem."<<endl;
    cout<<"                                                          B.) Uh...n-no...  "<<endl;
    cout<<"                                                          C.) With someone I like. "<<endl;
    back12:
    cin>>quest[11];// question number 12
      system("clear");
    switch(quest[11]){
    case 'A':
    case 'a':
    personality+=130;
    goto next12;
    break;
    case 'B':
    case 'b':
    personality+=80;
    goto next12;
    break;
    case 'C':
    case 'c':
    personality+=100;
    goto next12;
    break;
    default:
    goto back12;
    }
    next12:
    cout<<"                                   It's a weekend, but no one will play with you. What do you do?"<<endl;
    cout<<"                                                          A.) Go on a trip."<<endl;
    cout<<"                                                          B.) Hang around vacantly.  "<<endl;
    cout<<"                                                          C.) Huddle in a corner. "<<endl;
    back13:
    cin>>quest[12];// question number 13
      system("clear");
    switch(quest[12]){
    case 'A':
    case 'a':
    personality+=90;
    goto next13;
    break;
    case 'B':
    case 'b':
    personality+=20;
    goto next13;
    break;
    case 'C':
    case 'c':
    personality+=10;
    goto next13;
    break;
    default:
    goto back13;
    }
    next13:
    cout<<"                                   Somebody calls you 'weird but funny' How does that make you feel?"<<endl;
    cout<<"                                                          A.) Happy!"<<endl;
    cout<<"                                                          B.) Not happy.  "<<endl;
    back14:
    cin>>quest[13];// question number 14
      system("clear");
    switch(quest[13]){
    case 'A':
    case 'a':
    personality+=10;
    goto next14;
    break;
    case 'B':
    case 'b':
    personality+=100;
    goto next14;
    break;
    default:
    goto back14;
    }
    next14:
    cout<<"                                   The road forks to the right and left. You are told there is treasure on the right. What do you do?"<<endl;
    cout<<"                                                          A.) Instantly go right."<<endl;
    cout<<"                                                          B.) It's a trap! Go left!"<<endl;
    cout<<"                                                          C.) Choose either side."<<endl;
    back15:
    cin>>quest[14];// question number 15
      system("clear");
    switch(quest[14]){
    case 'A':
    case 'a':
    personality+=40;
    goto next15;
    break;
    case 'B':
    case 'b':
    personality+=100;
    goto next15;
    break;
    case 'C':
    case 'c':
    personality+=80;
    goto next15;
    break;
    default:
    goto back15;
    }
    next15:
    cout<<"                                   Would you like to play as a boy or a girl?"<<endl;
    cout<<"                                                          A.) Boy"<<endl;
    cout<<"                                                          B.) Girl  "<<endl;
    back16:
    cin>>quest[15];// question number 16
      system("clear");
    switch(quest[15]){
    case 'A':
    case 'a':
    goto next16;
    break;
    case 'B':
    case 'b':
    goto next16;
    break;
    default:
    goto back16;
    }
    next16:
    
    string pokemon;
    
    if(personality<=1300 && personality>=1210){//charmander
        pokemon = "Charmander";
        cout<<"The Hardy Type!-You're so determined! You don't whine or feel sorry for yourself, and you never need help with anything."<<endl;
        cin>>ent1;
        cout<<"You also have a strong sense of responsibility. You work toward your goals steadily and never require attention along the way."<<endl;
        cin>>ent1;
        cout<<"Your resilient spirit is the only thing you need to guide you toward your goals. But be careful! You risk wearing yourself out if you work too long all on your own!"<<endl;
        cin>>ent1;
        cout<<"You should recognize that sometimes you need help from friends. So, a hardy, determined type like you..."<<endl;
        cin>>ent1;
          system("clear");
        cout<<"will be a Charmander"<<endl;
    }else if(personality>=440 && personality<=460){
        pokemon = "Psyduck";
        cout<<"The Relaxed type!-You're so casual, leisurely, and carefree.You don't rush or stress yourself out, and you don't worry about anything."<<endl;
        cin>>ent1;
        cout<<"You like to take a seat and kick up your feet! You definitely have an easygoing personality, and you don't sweat the details."<<endl;
        cin>>ent1;
        cout<<"People naturally flock to you because they find you to be a free spirit, which is so refreshing! So, a relaxed type like you..."<<endl;
        cin>>ent1;
          system("clear");
        cout<<"will be a Psyduck"<<endl;
    }else if(personality>=810 && personality<=900){
        pokemon = "Pikachu";
         cout<<"The Impish Type!-You really like to play a lot! And you enjoy eating a lot! You love competition, but you hate losing."<<endl;
        cin>>ent1;
        cout<<"Your personality seems crystal clear to others. With you, what you see is what you get! You cheer others with your dazzling smile."<<endl;
        cin>>ent1;
        cout<<"But you may be afraid of showing what's in your heart and revealing your true self. You may not want to keep your worries to yourself."<<endl;
        cin>>ent1;
        cout<<"You're only human, so ask your friends for advice when you need it. So, an impish type like you..."<<endl;
        cin>>ent1;
          system("clear");
        cout<<"will be a Pikachu"<<endl;
    }else if(personality>=1320 && personality<=1400){
        pokemon = "Skitty";
        cout<<"The Hasty Type!-You talk quickly! You eat quickly! You walk quickly! People often see you as a hard worker because you're always moving around so fast! "<<endl;
        cin>>ent1;
        cout<<"But be careful! If you always rush so fast, you may make mistakes more often than others do. And what a waste that would be! "<<endl;
        cin>>ent1;
        cout<<"Relax every now and then with a nice, deep breath! So, a hasty type like you..."<<endl;
        cin>>ent1;
          system("clear");
        cout<<"will be a Skitty"<<endl;
    }else if(personality>=1410 && personality<=1510){
        pokemon = "Machop";
        cout<<"The Brave Type!-You don't know the meaning of fear! You're not afraid to keep moving forward in the face of danger. "<<endl;
        cin>>ent1;
        cout<<"You also have a strong sense of justice and can't turn a blind eye to someone in trouble. But you sometimes push your own personal sense of justice a little too hard."<<endl;
        cin>>ent1;
        cout<<"Be careful that you don't get too pushy! So, a brave type like you..."<<endl;
        cin>>ent1;
          system("clear");
        cout<<"will be a Machop"<<endl;
    }else if(personality>=470 && personality<=500){
        pokemon = "Eevee";
        cout<<"The Naive Type!-You're so open and innocent! What a strong sense of curiosity you have! And you state your opinions purely, sharing exactly what you think."<<endl;
        cin>>ent1;
        cout<<"You also have an artistic spirit that isn't restrained by social conventions! You startle people with your spontaneity and vision."<<endl;
        cin>>ent1;
        cout<<"But when you overdo it, other people can have a hard time keeping up with you...Have you noticed people looking at you oddly?"<<endl;
        cin>>ent1;
        cout<<"As if for no apparent reason? So, a naive, innocent type like you..."<<endl;
        cin>>ent1;
          system("clear");
        cout<<"will be a Eevee"<<endl;
    }else if(personality>=1010 && personality<=1050){
        pokemon = "Squirtle";
        cout<<"The Jolly Type!-You have a good sense of humor, and you're compassionate. You're always making others around you laugh."<<endl;
        cin>>ent1;
        cout<<"You have a sunny, positive outlook, and you have a vitality that raises the lowest spirits to giddy heights! Yet, for all your great cheer, you're also open to tears..."<<endl;
        cin>>ent1;
        cout<<"But you bounce between laughter and tears so easily! What an adventure life must be like for you, bouncing around like that all day! So, a jolly type like you..."<<endl;
        cin>>ent1;
          system("clear");
        cout<<"will be a Squirtle"<<endl;
    }else if(personality>=610 && personality<=700){
        pokemon = "Mudkip";
        cout<<"The Calm Type!-You're very compassionate and considerate, and you put friends ahead of yourself."<<endl;
        cin>>ent1;
        cout<<"You're so generous and kindhearted that you can laugh, forgive, and forget when your friends make mistakes."<<endl;
        cin>>ent1;
        cout<<"But be aware that your compassion can sometimes get the best of you, putting you too far behind everyone else! So, a calm type like you..."<<endl;
        cin>>ent1;
          system("clear");
        cout<<"will be a Mudkip"<<endl;
    }else if(personality>=520 && personality<=550){
        pokemon = "Bulbasaur";
        cout<<"The Docile Type!-You're quite sensitive to others! You listen attentively and respectfully, and you're quick to pick up on things."<<endl;
        cin>>ent1;
        cout<<"Because you're so good at listening, do you find that your friends tell you their problems and concerns often? "<<endl;
        cin>>ent1;
        cout<<"Perhaps people laugh at you sometimes for being so earnest and not recognizing jokes for what they are."<<endl;
        cin>>ent1;
        cout<<"But you're honestly surprised and bashful about this aspect of yourself...And then honestly laugh about it! So, a docile, sensitive type like you..."<<endl;
        cin>>ent1;
          system("clear");
        cout<<"will be a Bulbasaur"<<endl;
    }else if(personality>=1060 && personality<=1100){
        pokemon = "Totodile";
        cout<<"The Jolly Type!-You have a good sense of humor, and you're compassionate. You're always making others around you laugh."<<endl;
        cin>>ent1;
        cout<<"You have a sunny, positive outlook, and you have a vitality that raises the lowest spirits to giddy heights! Yet, for all your great cheer, you're also open to tears..."<<endl;
        cin>>ent1;
        cout<<"But you bounce between laughter and tears so easily! What an adventure life must be like for you, bouncing around like that all day! So, a jolly type like you..."<<endl;
        cin>>ent1;
          system("clear");
        cout<<"will be a Totodile"<<endl;
    }else if(personality>=720 && personality<=800){
        pokemon = "Cyndaquil";
        cout<<"The Timid type!-You're quite gentle! You're sometimes a little shy about new things, aren't you? "<<endl;
        cin>>ent1;
        cout<<"Do you miss out on some experiences because you get worried about the newness of the challenge? Of course, there's also a great benefit in being cautious, isn't there?"<<endl;
        cin>>ent1;
        cout<<"After all, it keeps you nice and safe! You live life at your own speed, with no hurries and no worries! So, a timid and gentle type like you...."<<endl;
        cin>>ent1;
          system("clear");
        cout<<"will be a Cyndaquil"<<endl;
    }else if(personality>=560 && personality<=600){
        pokemon = "Chikorita";
        cout<<"The Docile Type!-You're quite sensitive to others! You listen attentively and respectfully, and you're quick to pick up on things."<<endl;
        cin>>ent1;
        cout<<"Because you're so good at listening, do you find that your friends tell you their problems and concerns often? "<<endl;
        cin>>ent1;
        cout<<"Perhaps people laugh at you sometimes for being so earnest and not recognizing jokes for what they are."<<endl;
        cin>>ent1;
        cout<<"But you're honestly surprised and bashful about this aspect of yourself...And then honestly laugh about it! So, a docile, sensitive type like you..."<<endl;
        cin>>ent1;
          system("clear");
        cout<<"Chikorita"<<endl;
    }else if(personality>=400 && personality<=430){
        pokemon = "Cubone";
        cout<<"The Lonely Type!-At least a little bit! You might find that surprising, but do you think it might be a little true?"<<endl;
        cin>>ent1;
        cout<<"You know what they say, though...We're all a bit lonely every now and then! You probably keep this fact of life to yourself, though."<<endl;
        cin>>ent1;
        cout<<"But if there's one thing that brings us all together...it's our need to go it solo! So, a Lonely and solitary type like you..."<<endl;
        cin>>ent1;
          system("clear");
        cout<<"will be a Cubone"<<endl;
    }else if(personality>=1160 && personality<=1200){
        pokemon = "Torchic";
        cout<<"The Sassy Type!-Or at least somewhat sassy! You don't like taking orders. You're a little rebellious and like to disagree."<<endl;
        cin>>ent1;
        cout<<"You're a lone wolf! You like to keep your distance from groups and go off to do things on your own."<<endl;
        cin>>ent1;
        cout<<"Older folks may be ones who find you the most disagreeable, even selfish."<<endl;
        cin>>ent1;
        cout<<"But people younger than you tend to really admire you! So, a sassy type like you..."<<endl;
        cin>>ent1;
          system("clear");
        cout<<"will be a Torchic"<<endl;
    }else if(personality>=1110 && personality<=1150){
        pokemon = "Treecko";
         cout<<"The Sassy Type!-Or at least somewhat sassy! You don't like taking orders. You're a little rebellious and like to disagree."<<endl;
        cin>>ent1;
        cout<<"You're a lone wolf! You like to keep your distance from groups and go off to do things on your own."<<endl;
        cin>>ent1;
        cout<<"Older folks may be ones who find you the most disagreeable, even selfish."<<endl;
        cin>>ent1;
        cout<<"But people younger than you tend to really admire you! So, a sassy type like you..."<<endl;
        cin>>ent1;
          system("clear");
        cout<<"will be a Treecko"<<endl;
    }else if(personality>=920 && personality<=1000){
        pokemon = "Meowth";
        cout<<"The Quirky Type!-You want to be on the cutting edge of fashion! You want to own all the latest stuff, right?"<<endl;
        cin>>ent1;
        cout<<"But you grow bored of your old things and only like new things! You're true to your emotions, and you follow your desires."<<endl;
        cin>>ent1;
        cout<<"People have a hard time keeping up with you because you change so quickly. "<<endl;
        cin>>ent1;
        cout<<"You may want to reflect upon how your words and actions affect others. So, a quirky type like you..."<<endl;
        cin>>ent1;
          system("clear");
        cout<<"will be a Meowth"<<endl;
    }else{
        pokemon = "Riolu";
        cout<<"The Unique Type!- You seem to be different from any other people around you."<<endl;
        cin>>ent1;
        cout<<"You are ussually the odd one out, am I correct?"<<endl;
        cin>>ent1;
        cout<<"Nothing much is known about people like you. So, a unique type like you..."<<endl;
        cin>>ent1;
          system("clear");
        cout<<"will be a Riolu"<<endl;
    }

    string name, ent2;
    cout<<"Enter your name: ";
    cin>>name;
      system("clear");
    cout<<"So, "<<name<<", your adventure starts now as a "<<pokemon<<". With that, you are about to enter a world different from ours."<<endl;
    cin>>ent2;
      system("clear");
    cout<<"With that being said welcome to the world of Pokémon!"<<endl;
    cin>>ent2;
      system("clear");
{
    int wave[20];
    float woah = 0;
    for (int x=0;x<10;x++){

    wave[x]=woah;

    cout<<"                                                  |               |"<<endl;
    cout<<"                                                   |               |"<<endl;
    cout<<"                                                    |               |"<<endl;
    cout<<"                                                     |               |"<<endl;
    cout<<"                                                      |               |"<<endl;
    cout<<"                                                      |               |"<<endl;
    cout<<"                                                      |               |"<<endl;
    cout<<"                                                     |               |"<<endl;
    cout<<"                                                    |               |"<<endl;
    cout<<"                                                   |               |"<<endl;
    cout<<"                                                  |               |"<<endl;
    cout<<"                                                  |               |"<<endl;
}
   cout<<"                                                    See You Soon!                                           "<<endl;
}
return;
}
int main()
{
     intro();
     story();
     question();
}
