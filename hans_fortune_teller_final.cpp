#include<iostream>
#include<unistd.h>
using namespace std;

   struct{
        int year;
        int month;
        int day;
    }bdate;

    struct{
        string name;
        int sign;
    }userinfo;
    
  void aquarius(){
    cout << " you're a AQUARIUS | The water bearer" << endl;
  };
  void pisces(){
    cout << " you're a PISCES | The fishes" << endl;
  };
  void aries(){
    cout << " you're a ARIES | The ram" << endl;
  };
  void taurus(){
    cout << " you're a TAURUS | The bull" << endl;
  };
  void gemini(){
    cout << " you're a GEMINI | The twins" << endl;
  };
  void cancer(){
    cout << " you're a CANCER | The crab" << endl;
  };
  void leo(){
    cout << " you're a LEO | The lion" << endl;
  };
  void virgo(){
    cout << " you're a VIRGO | The maiden" << endl;
  };
  void libra(){
    cout << " you're a LIBRA | The scales" << endl;
  };
  void scorpio(){
    cout << " you're a SCORPIO | The scorpion" << endl;
  };
  void sagittarius(){
    cout << " you're a SAGITTARIUS | The archer" << endl;
  };
  void capricorn(){
    cout << " you're a CAPRICORN | The goat" << endl;
  };

int main(){
  
  sleep (3);
  system ("cls");
  
    cout << "\n\n   F  ";
    cout << " O";
    cout << "   R";
    cout << "   T";
    cout << "   U";
    cout << "   N";
    cout << "   E";
    cout << "       T";
    cout << "   E";
    cout << "   L";
    cout << "   L";
    cout << "   E";
    cout << "   R";

    sleep (3);

    system ("cls");

    cout << "\n\n                 ENTER YOUR  BIRTHDATE" << endl;
    cout << "\n                     YEAR: ";
    cin >> bdate.year;
    cout << "\n                     MONTH: ";
    cin >> bdate.month;
    cout << "\n                     DAY: ";
    cin >> bdate.day;

    {

      if ((bdate.day > 31) || (bdate.month > 12) || (bdate.year > 2022) || (bdate.year < 1990))
    {
        system ("cls");
        cout << "                 Wrong date Format!" << endl;
        cout << "                 Only use number!" << endl;
        cout << "\n\n                 ENTER YOUR  BIRTHDATE" << endl;
        cout << "\n                     YEAR: ";
        cin >> bdate.year;
        cout << "\n                     MONTH: ";
        cin >> bdate.month;
        cout << "\n                     DAY: ";
        cin >> bdate.day;
    }
    if ((bdate.day > 31) || (bdate.month > 12) || (bdate.year > 2022) || (bdate.year < 1990))
      {
        cout << "\n\n                 Wrong date format!!!!!" << endl;
      cout << "                 program will restart a few second" << endl;
      main();
      }

    }
    
    {

    system ("cls");
    cout << "\n\n                   ENTER YOUR NAME: ";
    cin >> userinfo.name;

    cout << userinfo.name << endl;
    system ("cls");

    }
  
    {
    
    cout << " Hey! " << userinfo.name << "!" ;

    if ((bdate.month == 1 && bdate.day >= 20) || (bdate.month == 2 && bdate.day <= 18)){
    userinfo.sign = 1;
    aquarius();
    }
     else if ((bdate.month == 2 && bdate.day >= 19) || (bdate.month == 3 && bdate.day <=20)){
    userinfo.sign = 2;
     pisces();
     }
     else if ((bdate.month == 3 && bdate.day >= 21 ) || (bdate.month == 4 && bdate.day <= 19)){
    userinfo.sign = 3;
     aries();
     }
     else if ((bdate.month == 4 && bdate.day >= 20 ) || (bdate.month == 5 && bdate.day <= 20)){
    userinfo.sign = 4;
     taurus();
     }
     else if ((bdate.month == 5 && bdate.day >= 21) || (bdate.month == 6 && bdate.day <= 21)){
    userinfo.sign = 5;
     gemini();
     }
     else if ((bdate.month == 6 && bdate.day >= 22) || (bdate.month == 7 && bdate.day <= 22)){
    userinfo.sign = 6;
     cancer();
     }
     else if ((bdate.month == 7 && bdate.day >= 23) || (bdate.month == 8 && bdate.day <= 22)){
    userinfo.sign = 7;
     leo();
     }
     else if ((bdate.month == 8 && bdate.day >= 23) || (bdate.month == 9 && bdate.day <= 22)){
    userinfo.sign = 8;
     virgo();
     }
     else if ((bdate.month == 9 && bdate.day >= 23) || (bdate.month == 10 && bdate.day <= 23)){
    userinfo.sign = 9;
     libra();
     }
     else if ((bdate.month == 10 && bdate.day >= 24) || (bdate.month == 11 && bdate.day <= 21)){
    userinfo.sign = 10;
     scorpio();
     }
     else if ((bdate.month == 11 && bdate.day >= 22) || (bdate.month == 12 && bdate.day <= 21)){
    userinfo.sign = 11;
     sagittarius();
     }
     else if ((bdate.month == 12 && bdate.day >= 22) || (bdate.month == 1 && bdate.day <= 19)){
    userinfo.sign = 12;
     capricorn();
     }

    }

    {
     while (userinfo.sign == 1)
     {
      sleep(2);
      cout << "\n\n   HERE's WHAT YOU'RE TRAITS ARE!!" << endl;
      sleep(2);
      cout << "\n*you're a purposefulle esoteric" << endl;
      sleep(2);
      cout << "\n*no feelings, just concepts" << endl;
      sleep(2);
      cout << "\n*you believes in conspiracy theories" << endl;
      sleep(2);
      cout << "\n*you're more in love with humanity as a whole than individuals" << endl;
      sleep(2);
      cout << "\n*and always feels an outcast" << endl;
      sleep(2);
      cout << "\n*but fetishes personal freedom" << endl;

      sleep(2);
      system ("cls");

      cout << "\n\n     A FUN FACT ABOUT YOUR SIGN!" << endl;
      sleep(2);
      cout << "\n*Did you know that Aquarius is the last air sign in zodiac, despite the aqua in its name." << endl;
      sleep(2);
      cout << "\n*An Aquarius is Innovative, progressive, and shamelessly revolutionary" << endl;
      sleep(2);
      cout << "\n*Aquarius is represented by the water bearer, the mystical healer who bestows water or life." << endl;
      sleep(2);
      cout << "\n*Aquarius is the most humanitarian astrological sign." << endl;
      sleep(2);
      cout << "\n*At the end of the day, Aquarius is dedicated to making the world a better place!" << endl;

      sleep (2);
      system ("cls");

      cout << "\n\n     WHAT 2023 HAS IN STORE FOR YOU?" << endl;
      sleep (2);
      cout << "\n*You're 2023 will be a window for liberation." << endl;
      sleep (2);
      cout << "\n*You're finally freeing yourself from the constraits and limiting beliefs that been holding you back from being who you are" << endl;
      sleep (2);
      cout << "\n*Now, you can show the world your unique and true self without feeling as though you need to hide" << endl;
      sleep (2);
      cout << "\n*There may be moments of internal conflict and struggles with others who can't accept the real you — but that's a small price you'll have to pay to have the opportunity to live on your own terms" << endl;
      cout << "\n\n\n\n";

      system ("pause");
      if (userinfo.sign ==1 )
      {break;
       }
      
     }

     while (userinfo.sign == 2)
     {
      sleep(2);
      cout << "\n\n     HERE's WHAT YOU'RE TRAITS ARE!!" << endl;
      sleep(2);
      cout << "\n*you're somehow both 5 and 50 old at once" << endl;
      sleep(2);
      cout << "\n*you thinks everything is a sign" << endl;
      sleep(2);
      cout <<"\n*you can't remember if you dreamt it or it actually happened" << endl;
      sleep(2);
      cout << "\n*you're a excessively romantic" << endl;
      sleep(2);
      cout << "\n*you're prone to fantasy" << endl;
      sleep(2);
      cout << "\n*no boundaries" << endl;

      sleep (2);
      system("cls");

      cout << "\n\n     A FUN FACT ABOUT YOUR SIGN!" << endl;
      sleep (2);
      cout << "\n*if you looked up the word \"phsychic\" in the dictionary, there would definitely be a picture of PISCES next to it" << endl;
      sleep (2);
      cout << "\n*PISCES is the most intuitive, sensitive, and empathetic sign in the entire zodiac" << endl;
      sleep (2);
      cout << "\n*PISCES absorbed every lesson, the joys, the pain, the hopes and the fears." << endl;
      sleep (2);
      cout << "\n*It's symbolized by two fish swimming in opposite directions, representing the constant division of Pisces's  attention between fantasy and reality" << endl;

      sleep (2);
      system ("cls");

      cout << "\n\n     WHAT 2023 HAS IN STORE FOR YOU?" << endl;
      sleep (2);
      cout << "\n*In 2023, you'll start to see the benefit of getting grounded" << endl;
      sleep (2);
      cout << "\n*While everyone else is planning their summer vacations, you'll opt to save your pennies for a rainy day and forgo a long term trip for a shorter holiday or staycation" << endl;
      sleep (2);
      cout << "\n*You may find that by creating stronger scaffolding, you'll be able to achieve new heights. Instead of having your head in the clouds, you'll have a view" << endl;
      cout << "\n\n\n\n";

      system ("pause");
      if (userinfo.sign == 2)
      {break;
       }

     }
    
    while (userinfo.sign == 3)
    {
      sleep(2);
      cout << "\n\n     HERE's WHAT YOU'RE TRAITS ARE!!" << endl;
      sleep(2);
      cout << "\n*you have no filter" << endl;
      sleep (2);
      cout << "\n*you get angry, then forgets why you're angry" << endl;
      sleep (2);
      cout << "\n*you think everyting is a game you can win" << endl;
      sleep (2);
      cout << "\n*you will do anything on dare" << endl;
      sleep (2);
      cout << "\n*you get bored easily" << endl;

      sleep (2);
      system ("cls");

      cout << "\n\n     A FUN FACT ABOUT YOUR SIGN!" << endl;
      sleep (2);
      cout << "\n*ARIES loves to be number one" << endl;
      sleep (2);
      cout << "\n*Naturally ARIES is non stranger to competition, they are Bold and Ambitious" << endl;
      sleep (2);
      cout << "\n*ARIES dives headfirst into even the most challenging situations, and they'll make sure they always come out on top!" << endl;

      sleep (2);
      system ("cls");

      cout << "\n\n     WHAT 2023 HAS IN STORE FOR YOU?" << endl;
      sleep (2);
      cout << "\n*You're feeling larger-than-life and extremely confident this year" << endl;
      sleep (2);
      cout << "\n*You're ready to let go of relationships that are past their prime" << endl;
      sleep (2);
      cout << "\n*You may not want to do the heavy lifting when it comes to ending these situations, however, So if you choose to stay with your significant other or any other relationships that come to mind, you will have to give the it your all" << endl;
      sleep (2);
      cout << "\n*Put your ego to the side and dedicate yourself to understanding your partner better or on a deeper level, and making peace with what you find" << endl;      
      cout << "\n\n\n\n";

      system ("pause");
      if (userinfo.sign == 3)
      {break;
       }

    }
      
     while (userinfo.sign == 4)
     {
      sleep(2);
      cout << "\n\n     HERE's WHAT YOU'RE TRAITS ARE!!" << endl;
      sleep(2);
      cout << "\n*you loves cuddle" << endl;
      sleep (2);
      cout << "\n*you're a homebody" << endl;
      sleep (2);
      cout << "\n*you're all or nothing, no in-between" << endl;
      sleep (2);
      cout << "\n*you waer the same outfit everyday" << endl;
      sleep (2);
      cout << "\n*you hates big changes" << endl;

      sleep (2);
      system ("cls");

      cout << "\n\n     A FUN FACT ABOUT YOUR SIGN!" << endl;
      sleep (2);
      cout << "\n*A sign is more likely to take a six-hour bath, followed buy a luxurious massage and decadent dessert spread" << endl;
      sleep (2);
      cout << "\n*TAURUS enjoys relaxing in serene, bucolic environments surrounded by a soft sounds, soothing aromas, and succulent flavors" << endl;

      sleep (2);
      system ("cls");

      cout << "\n\n     WHAT 2023 HAS IN STORE FOR YOU?" << endl;
      sleep (2);
      cout << "\n*While you're known to be change-averse (to say the least!), you will find benefits to embracing inner growth this year" << endl;
      sleep (2);
      cout << "\n*This means exploring different areas of interest" << endl;
      sleep (2);
      cout << "\n*If you want to travel to a far-off place, take a class with friends and family, learn a new spiritual practice or a foreign language, then you should go for it!" << endl;
      sleep (2);
      cout << "\n*Don't let who you were stand in the way of who you can become" << endl;
      cout << "\n\n\n\n";

      system ("pause");
      if (userinfo.sign == 4)
      {break;
       }

     }

     while (userinfo.sign == 5)
     {
      sleep(2);
      cout << "\n\n     HERE's WHAT YOU'RE TRAITS ARE!!" << endl;
      sleep(2);
      cout << "\n*you're charismatic" << endl;
      sleep (2);
      cout << "\n*you used humor as a crutch" << endl;
      sleep (2);
      cout << "\n*can talk to a brick wall" << endl;
      sleep (2);
      cout << "\n*aguments is you're flirting" << endl;
      sleep (2);
      cout << "\n*knows a little about everything" << endl;

      sleep (2);
      system ("cls");

      cout << "\n\n     A FUN FACT ABOUT YOUR SIGN!" << endl;
      sleep (2);
      cout << "\n*When a GEMINI gets busy, they wished they could clone themselves just to get everything done" << endl;
      sleep (2);
      cout << "\n*a GEMINI a spontaneous, playful, and adorably erratic, a GEMINI is driven by they're insatiable curiosity" << endl;
      sleep (2);
      cout << "\n*a GEMINI was interested in so many pursuits that it had to double itself" << endl;

      sleep (2);
      system ("cls");

      cout << "\n\n     WHAT 2023 HAS IN STORE FOR YOU?" << endl;
      sleep (2);
      cout << "\n*You spent the last two years healing your mind, body and spirit" << endl;
      sleep (2);
      cout << "\n*Whether you were aware of it or not, you might have held others at a distance" << endl;
      sleep (2);
      cout << "\n*Now, you're ready to get back into the world to show off the best of yourself and reconnect with those you've lost touch with" << endl;
      sleep (2);
      cout << "\n*2023 marks a time in which you're stepping out and getting back in touch with old friends and family to share your wisdom. Hopefully, you'll inspire them to go on their own journeys" << endl;
      cout << "\n\n\n\n";

      system ("pause");
      if (userinfo.sign == 5)
      {break;
       }

     }

     while (userinfo.sign == 6)
     {
      sleep(2);
      cout << "\n\n     HERE's WHAT YOU'RE TRAITS ARE!!" << endl;
      sleep(2);
      cout << "\n*you're sensitive" << endl;
      sleep (2);
      cout << "\n*you seek comfort" << endl;
      sleep (2);
      cout << "\n*you forgive but never forget" << endl;
      sleep (2);
      cout << "\n*only has one boundary, but it is very firm" << endl;
      sleep (2);
      cout << "\n*takes on other people's problems" << endl;

      sleep (2);
      system ("cls");

      cout << "\n\n     A FUN FACT ABOUT YOUR SIGN!" << endl;
      sleep (2);
      cout << "\n*CANCER seamlessly weaves between the sea and shore representing CANCER's ability to exist in both emotional and material realms" << endl;
      sleep (2);
      cout << "\n*CANCER's are highly intuitive and their psychic abilities manifest in tangible spaces" << endl;
      sleep (2);
      cout << "\n*a CANCER is willing to do whatevere it takes to protect itself emotionally" << endl;
      sleep (2);
      cout << "\n*in order to get along with CANCER, you're going to need to establish trust" << endl;

      sleep (2);
      system ("pcls");

      cout << "\n\n     WHAT 2023 HAS IN STORE FOR YOU?" << endl;
      sleep (2);
      cout << "\n*Your career is going to be lit up with infinite possibilities in 2023" << endl;
      sleep (2);
      cout << "\n*If there is a promotion or position that you've been eyeing, then it's time to concentrate on bringing those dreams to life" << endl;
      sleep (2);
      cout << "\n*Remember that you'll have to find balance in your life in order to achieve personal success, too" << endl;
      sleep (2);
      cout << "\n*This means curbing late night meetings and burning the midnight oil to spend time with family members or friends in an effort to cut loose (which is extremely important). Choose to reward yourself with self-care for all of your hard work" << endl;
      cout << "\n\n\n\n";

      system ("pause");
      if (userinfo.sign == 6)
      {break;
       }

     }

     while (userinfo.sign == 7)
     {
      sleep(2);
      cout << "\n\n     HERE's WHAT YOU'RE TRAITS ARE!!" << endl;
      sleep(2);
      cout << "\n*you exudes warmth and creativity" << endl;
      sleep (2);
      cout << "\n*you're a little bit vain" << endl;
      sleep (2);
      cout << "\n*has a big personality" << endl;
      sleep (2);
      cout << "\n*wants to stands out" << endl;
      sleep (2);
      cout << "\n*has an interest in luxury" << endl;

      sleep (2);
      system ("cls");

      cout << "\n\n     A FUN FACT ABOUT YOUR SIGN!" << endl;
      sleep (2);
      cout << "\n*a LEO is passionate, loyal, and infamously dramaric" << endl;
      sleep (2);
      cout << "\n*LEO's are the kings and queens of the celestial jungle" << endl;
      sleep (2);
      cout << "\n*a LEO is delighted to embrace their royal status: Vivacious, theatrical, and fiery" << endl;
      sleep (2);
      cout << "\n*LEO's love to  bask in the spotlight and celebrate themselves" << endl;

      sleep (2);
      system ("cls");

      cout << "\n\n     WHAT 2023 HAS IN STORE FOR YOU?" << endl;
      sleep (2);
      cout << "\n*The direction of your career is taking you on a different path from where it started years ago" << endl;
      sleep (2);
      cout << "\n*Rather than run away and avoid the changes that are coming your way, try to embrace them with open arms" << endl;
      sleep (2);
      cout << "\n*In order to keep up with the times, lean into inventive and modern ways to promote and advance your business" << endl;
      sleep (2);
      cout << "\n*It's 2023 — the world is ready for you, and you're ready for the world" << endl;
      cout << "\n\n\n\n";

      system ("pause");
      if (userinfo.sign == 7)
      {break;
       }

     }

     while (userinfo.sign == 8)
     {
      sleep(2);
      cout << "\n\n     HERE's WHAT YOU'RE TRAITS ARE!!" << endl;
      sleep(2);
      cout << "\n*Needs to feel useful" << endl;
      sleep (2);
      cout << "\n*has a quick fix for everything" << endl;
      sleep (2);
      cout << "\n*you're judgemental, but with good intentions" << endl;
      sleep (2);
      cout << "\n*has exceptional spatial awareness" << endl;
      sleep (2);
      cout << "\n*has a million ideas per second" << endl;

      sleep (2);
      system ("cls");

      cout << "\n\n     A FUN FACT ABOUT YOUR SIGN!" << endl;
      sleep (2);
      cout << "\n\"*if you want something done, give it to a busy person\" was virgo anthems" << endl;
      sleep (2);
      cout << "\n*VIRGO's are logical, practical, and systematic in their approach in life" << endl;
      sleep (2);
      cout << "\n*VIRGO is an historically represented by the goddess of wheat and agriculture, an association thats speaks to VIRGO's deep-rooted presence in material world" << endl;
      sleep (2);
      cout << "\n*a VIRGO is a perfectionist at heart and isn't afraid to improve skills through dilligent and consistent practice" << endl;

      sleep (2);
      system ("cls");

      cout << "\n\n     WHAT 2023 HAS IN STORE FOR YOU?" << endl;
      sleep (2);
      cout << "\n*Opening up your heart has taken you on a roller coaster this year, Virgo ... but it was so worth it" << endl;
      sleep (2);
      cout << "\n* In 2023, your relationships will solidify into ones that are even more fulfilling, and that's only because you were open to them" << endl;
      sleep (2);
      cout << "\n*Create healthy boundaries in order for the relationship to blossom and ensure you're not giving your all with little in return" << endl;
      sleep (2);
      cout << "\n*As long as your partner is open to working on making you a priority (which they will), then things are going to flourish and take on a more positive energy in the relationship" << endl;
      cout <<"\n\n\n\n";

      system ("pause");
      if (userinfo.sign == 8)
      {break;
       }

     }
     
     while (userinfo.sign == 9)
    {
      sleep(2);
      cout << "\n\n     HERE's WHAT YOU'RE TRAITS ARE!!" << endl;
      sleep(2);
      cout << "\n*you hate being alone" << endl;
      sleep (2);
      cout << "\n*really good aesthetics" << endl;
      sleep (2);
      cout << "\n*you're conflict avoidant" << endl;
      sleep (2);
      cout << "\n*you sees every side" << endl;
      sleep (2);
      cout << "\n*you're prone to fantasy" << endl;
      sleep (2);
      cout << "\n*you can't make decisions on your own" << endl;

      sleep (2);
      system ("cls");

     cout << "\n\n      A FUN FACT ABOUT YOU!" << endl;
      sleep (2);
      cout << "\n*balance, harmony, and justice define LIBRA energy" << endl;
      sleep (2);
      cout << "\n*LIBRA's is obsessed with symmetry and strives to create equilibrium in all areas of life, especially when it comes to matters of the heart" << endl;

      sleep (2);
      system ("cls");

      cout << "\n\n     WHAT 2023 HAS IN STORE FOR YOU?" << endl;
      sleep (2);
      cout << "\n*you may feel more surrounded than ever, with a growing friend group and social circle" << endl;
      sleep (2);
      cout << "\n*You'll never have to spend an evening solo again — unless you want to, of course" << endl;
      sleep (2);
      cout << "\n*Even though you'e attracting a lot of people into your life, be sure to keep your wits about you" << endl;
      sleep (2);
      cout << "\n*See these new friends for who they are. Don't put on blinders and accept bad behavior just because you're feeling lonely" << endl;
      sleep (2);
      cout << "\n*Be selective and discerning about who you let into your life, and watch as a thriving, exciting and healthy social life takes hold" << endl;
      cout << "\n\n\n\n";

      system ("pause");
      if (userinfo.sign == 9)
      {break;
       }

    }

    while (userinfo.sign == 10)
    {
      sleep(2);
      cout << "\n\n     HERE's WHAT YOU'RE TRAITS ARE!!" << endl;
      sleep(2);
      cout << "\n*primary emotion is betrayal" << endl;
      sleep (2);
      cout << "\n*looks cool in leather jacket" << endl;
      sleep (2);
      cout << "\n*OK with uncomfortable silence" << endl;
      sleep (2);
      cout << "\n*Can't be sure if they're serious or joking" << endl;
      sleep (2);
      cout << "\n*have eyes that look into your soul" << endl;
      
      sleep (2);
      system ("cls");

      cout << "\n\n     A FUN FACT ABOUT YOU!" << endl;
      sleep (2);
      cout << "\n*SCORPIO's is elusive and mysterious" << endl;
      sleep (2);
      cout << "\n*SCORPIO's uses emotional energy as fuel, cultivating powerful wisdom thhrough both the physical and unseen realms" << endl;
      sleep (2);
      cout << "\n*SCORPIO's derives its extraordinary courage from its psychic abilities, which is what makes SCORPIO one of the most complicated, dynamic signs of the zodiac" << endl;
      
      sleep (2);
      system ("cls");

      cout << "\n\n     WHAT 2023 HAS IN STORE FOR YOU?" << endl;
      sleep (2);
      cout << "\n*The shift in your daily routine will have an adverse affect on your personal life if you don't stay organized and on schedule in 2023" << endl;
      sleep (2);
      cout << "\n*The shift in your daily routine will have an adverse affect on your personal life if you don't stay organized and on schedule in 2023" << endl;
      sleep (2);
      cout << "\n*Before you hit a wall and experience burn out, remember that you can always ask for help. Do not suffer in silence" << endl;
      sleep (2);
      cout << "\n*Speak up if a problem arises that is beyond your control. You never know who will assist you or how much help you can receive unless you ask" << endl;
      cout << "\n\n\n\n";

      system ("pause");
      if (userinfo.sign == 10)
      {break;
       }

    }

    while (userinfo.sign == 11)
    {
      sleep(2);
      cout << "\n\n     HERE's WHAT YOU'RE TRAITS ARE!!" << endl;
      sleep(2);
      cout << "\n*no indoor voice" << endl;
      sleep (2);
      cout << "\n*forms opinions off of pure emotion" << endl;
      sleep (2);
      cout << "\n*obsessed with self improvement" << endl;
      sleep (2);
      cout << "\n*wields their truth like a blunt weapon" << endl;
      sleep (2);
      cout << "\n*friendliest person at the party" << endl;

      sleep (2);
      system ("cls");

      cout << "\n\n     A FUN FACT ABOUT YOU!" << endl;
      sleep (2);
      cout << "\n*SAGITTARIUS knows no bounds" << endl;
      sleep (2);
      cout << "\n*SAGITTARIUS's are always on a quest for knowledge" << endl;
      sleep (2);
      cout << "\n*SAGITTARIUS launches its many pursuits like blazing arrows, chasing after geographical, intellectual, and spiritual adventures" << endl;

      sleep (2);
      system ("cls");

      cout << "\n\n     WHAT 2023 HAS IN STORE FOR YOU?" << endl;
      sleep (2);
      cout << "\n*Sagittarius, this will be a year for creation. You may find that you're drawn to the arts or inspired to create something meaningful for the world to see or use" << endl;
      sleep (2);
      cout << "\n*The only obstacle standing in the way of this idea become a reality is ... you! Doubt will hold you back from putting the pen to paper, or setting forth on any creative pursuit" << endl;
      sleep (2);
      cout << "\n*Don't let negativity get in your head. Think optimistically and focus on getting lost in creativity. You might just end up finding yourself in the process" << endl;
      cout << "\n\n\n\n";

      system ("pause");
      if (userinfo.sign == 11)
      {break;
       }

    }

    while (userinfo.sign == 12)
    {
      sleep(2);
      cout << "\n\n   HERE's WHAT YOU'RE TRAITS ARE!!" << endl;
      sleep(2);
      cout << "\n*full grown adult since age six" << endl;
      sleep (2);
      cout << "\n*the responsible friend" << endl;
      sleep (2);
      cout << "\n*motivated by duty" << endl;
      sleep (2);
      cout << "\n*takes a while to warm up to people" << endl;
      sleep (2);
      cout << "\n*represses any emotion that gets in the way of success" << endl;

      sleep (2);
      system("cls");

      cout << "\n\n     A FUN FACT ABOUT YOU!" << endl;
      sleep (2);
      cout << "\n*CAPRICORN most valuable resource is time" << endl;
      sleep (2);
      cout << "\n*CAPRICORN is climbing the mountain straight to the top and knows that patience, perseverance, and dedication" << endl;
      sleep (2);
      cout << "\n*CAPRICORN are skilled at navigating both the material and emotional realms" << endl;
      
      sleep (2);
      system ("cls");

      cout << "\n\n     WHAT 2023 HAS IN STORE FOR YOU?" << endl;
      sleep (2);
      cout << "\n*The quest for success has elevated your status — but has it made you radiate with joy? Odds are that it has in the moment, but maybe not in the long run" << endl;
      sleep (2);
      cout << "\n*It's time to rekindle the spark within yourself and to embrace your inner child. Connect with activities that you enjoyed doing as a kid" << endl;
      sleep (2);
      cout << "\n*Remember who you used to be before you were afraid; let that be a guide for who you are now" << endl;
      cout << "\n\n\n\n";

      system ("pause");
      if (userinfo.sign == 12)
      {break;
       }

    }

    }
   
}