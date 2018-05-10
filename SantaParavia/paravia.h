#include <stdlib.h>
#include <vector>

using namespace std;
#ifndef __PARAVIA_H_INCLUDED__
#define __PARAVIA_H_INCLUDED__

/* Declare an enum to emulate a bool. */
enum TrueFalse {True, False};
//typedef enum TrueFalse bool;
/* Declare our player definition. */

    struct Player
    {
        int Cathedral, Clergy, CustomsDuty, CustomsDutyRevenue, DeadSerfs;
        int Difficulty, FleeingSerfs, GrainDemand, GrainPrice, GrainReserve;
        int Harvest, IncomeTax, IncomeTaxRevenue, RatsAte;
        int Justice, JusticeRevenue, Land, Marketplaces, MarketRevenue;
        int Merchants, MillRevenue, Mills, NewSerfs, Nobles, OldTitle, Palace;
        int Rats, SalesTax, SalesTaxRevenue, Serfs, SoldierPay, Soldiers, TitleNum;
        int TransplantedSerfs, Treasury, WhichPlayer, Year, YearOfDeath;
        char City[15], Name[25], Title[15];
        float PublicWorks, LandPrice;
        bool InvadeMe, IsBankrupt, IsDead, IWon, MaleOrFemale, NewTitle;
    }; //Player;
    typedef struct Player player;
    /* Declare our list of cities. */
//    char CityList[7][15] = {"Santa Paravia", "Fiumaccio", "Torricella", "Molinetto",
//        "Fontanile", "Romanga", "Monterana"};
//    /* Declare our male titles. */
//    char MaleTitles[8][15] = {"Sir", "Baron", "Count", "Marquis", "Duke",
//        "Grand Duke", "Prince", "* H.R.H. King"};
//    /* Declare our female titles. */
//    char FemaleTitles[8][15] = {"Lady", "Baroness", "Countess", "Marquise",
//        "Duchess", "Grand Duchess", "Princess",
//        "* H.R.H. Queen"};
/* Our prototypes. */
int main(void);
void DeclareCities();
int Random(int);
void InitializePlayer(player*, int, int, int, char*, bool);
void AddRevenue(player *);
int AttackNeighbor(player *, player *);
void BuyCathedral(player *);
void BuyGrain(player *);
void BuyLand(player *);
void BuyMarket(player *);
void BuyMill(player *);
void BuyPalace(player *);
void BuySoldiers(player *);
int limit10(int, int);
bool CheckNewTitle(player *);
void GenerateHarvest(player *);
void GenerateIncome(player *);
void ChangeTitle(player *);
void NewLandAndGrainPrices(player *);
void PrintGrain(player *);
int ReleaseGrain(player *);
void SeizeAssets(player *);
void SellGrain(player *);
void SellLand(player *);
void SerfsDecomposing(player *, float);
void SerfsProcreating(player *, float);
void PrintInstructions(void);
void PlayGame(player [], int);
void NewTurn(player *, int, player [], player *);
void BuySellGrain(player *);
void AdjustTax(player *);
void DrawMap(player *);
void StatePurchases(player *, int, player []);
void ShowStats(player [], int);
void ImDead(player *);
#endif
