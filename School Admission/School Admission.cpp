#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "Birthdate.h"
using namespace std;


void First_Grade()
{
    string math, reading, writing, science1, earth1, social1, visual1, physical1;
    double ave;
    math1:
        cout << "Math : "; cin >> math;
        if (math == "0" || math == "1" || math == "2" || math == "3" || math == "4" || math == "5")
        {
        reading1:
            cout << "Reading (Native Language) : "; cin >> reading;
            if (reading == "0" || reading == "1" || reading == "2" || reading == "3" || reading == "4" || reading == "5")
            {
            writing1:
                cout << "Writing (Native Language): "; cin >> writing;
                if (writing == "0" || writing == "1" || writing == "2" || writing == "3" || writing == "4" || writing == "5")
                {
                science1:
                    cout << "Life sciences (plants and animals) : "; cin >> science1;
                    if (science1 == "0" || science1 == "1" || science1 == "2" || science1 == "3" || science1 == "4" || science1 == "5")
                    {
                    earth1:
                        cout << "Earth sciences (e.g. air and weather) : "; cin >> earth1;
                        if (earth1 == "0" || earth1 == "1" || earth1 == "2" || earth1 == "3" || earth1 == "4" || earth1 == "5")
                        {
                        social1:
                            cout << "Social Studies : "; cin >> social1;
                            if (social1 == "0" || social1 == "1" || social1 == "2" || social1 == "3" || social1 == "4" || social1 == "5")
                            {
                            visual1:
                                cout << "Visual Arts : "; cin >> visual1;
                                if (visual1 == "0" || visual1 == "1" || visual1 == "2" || visual1 == "3" || visual1 == "4" || visual1 == "5")
                                {
                                physical1:
                                    cout << "Physical Education : "; cin >> physical1;
                                    if (physical1 == "0" || physical1 == "1" || physical1 == "2" || physical1 == "3" || physical1 == "4" || physical1 == "5")
                                    {
                                        int math1, reading1, writing1, science, earth, social, visual, physical;
                                        math1 = std::stoi(math);
                                        reading1 = std::stoi(reading);
                                        writing1 = std::stoi(writing);
                                        science = std::stoi(science1);
                                        earth = std::stoi(earth1);
                                        social = std::stoi(social1);
                                        visual = std::stoi(visual1);
                                        physical = std::stoi(physical1);

                                        ave = (math1 + reading1 + writing1 + science + earth + social + visual + physical)/8;
                                        if (math == "5" && ave >= 3.8) {
                                            cout << "Congratulations, you have been admitted to school!" << endl;
                                            system("pause 0");
                                        }
                                        else {
                                            cout << "Unfortunately, you have not been admitted to the school as you could not fully meet the requirements of the school..." << endl;
                                            cout << "Note!" << endl << "In order to be admitted to the school, the latest grade in mathematics must be 5 \nAnd the average grade in all subjects must be higher than or equal to 3.8!" << endl;
                                            system("pause 0");
                                        }
                                    }
                                    else {
                                        cout << "\nWrong!" << endl << "Try again!" << endl;
                                        goto physical1;
                                    }
                                }
                                else {
                                    cout << "\nWrong!" << endl << "Try again!" << endl;
                                    goto visual1;
                                }
                            }
                            else {
                                cout << "\nWrong!" << endl << "Try again!" << endl;
                                goto social1;
                            }
                        }
                        else {
                            cout << "\nWrong!" << endl << "Try again!" << endl;
                            goto earth1;
                        }

                    }
                    else {
                        cout << "\nWrong!" << endl << "Try again!" << endl;
                        goto science1;
                    }
                }
                else {
                    cout << "\nWrong!" << endl << "Try again!" << endl;
                    goto writing1;
                }

            }
            else {
                cout << "\nWrong!" << endl << "Try again!" << endl;
                goto reading1;
            }
        }
        else {
            cout << "\nWrong!" << endl << "Try again!" << endl;
            goto math1;
        }
}
void Second_Grade()
{
    string math, reading, writing, science1, english, music, visual1, technology, physical1;
    double ave;
math1:
    cout << "Math : "; cin >> math;
    if (math == "0" || math == "1" || math == "2" || math == "3" || math == "4" || math == "5")
    {
    reading1:
        cout << "Reading (Native Language): "; cin >> reading;
        if (reading == "0" || reading == "1" || reading == "2" || reading == "3" || reading == "4" || reading == "5")
        {
        writing1:
            cout << "Writing (Native Language): "; cin >> writing;
            if (writing == "0" || writing == "1" || writing == "2" || writing == "3" || writing == "4" || writing == "5")
            {
            science1:
                cout << "Life cycles : "; cin >> science1;
                if (science1 == "0" || science1 == "1" || science1 == "2" || science1 == "3" || science1 == "4" || science1 == "5")
                {
                earth1:
                    cout << "Foreign languages (e.g. English) : "; cin >> english;
                    if (english == "0" || english == "1" || english == "2" || english == "3" || english == "4" || english == "5")
                    {
                    social1:
                        cout << "Music : "; cin >> music;
                        if (music == "0" || music == "1" || music == "2" || music == "3" || music == "4" || music == "5")
                        {
                        visual1:
                            cout << "Art : "; cin >> visual1;
                            if (visual1 == "0" || visual1 == "1" || visual1 == "2" || visual1 == "3" || visual1 == "4" || visual1 == "5")
                            {
                            physical1:
                                cout << "Physical Education : "; cin >> physical1;
                                if (physical1 == "0" || physical1 == "1" || physical1 == "2" || physical1 == "3" || physical1 == "4" || physical1 == "5")
                                {
                                tech:
                                    cout << "Technology : "; cin >> technology;
                                    if (technology == "0" || technology == "1" || technology == "2" || technology == "3" || technology == "4" || technology == "5")
                                    {
                                        int math2, reading2, writing2, science2, english2, music2, visual, technology2, physical;
                                        math2 = std::stoi(math);
                                        reading2 = std::stoi(reading);
                                        writing2 = std::stoi(writing);
                                        science2 = std::stoi(science1);
                                        english2 = std::stoi(english);
                                        music2 = std::stoi(music);
                                        visual = std::stoi(visual1);
                                        technology2 = std::stoi(technology);
                                        physical = std::stoi(physical1);

                                        ave = (math2 + reading2 + writing2 + science2 + english2 + music2 + visual + technology2 + physical) / 9;
                                        if (math == "5" && ave >= 3.8) {
                                            cout << "Congratulations, you have been admitted to school!" << endl;
                                            system("pause 0");
                                        }
                                        else {
                                            cout << "Unfortunately, you have not been admitted to the school as you could not fully meet the requirements of the school..." << endl;
                                            cout << "Note!" << endl << "In order to be admitted to the school, the latest grade in mathematics must be 5 \nAnd the average grade in all subjects must be higher than or equal to 3.8!" << endl;
                                            system("pause 0");
                                        }
                                    }
                                    else {
                                        cout << "\nWrong!" << endl << "Try again!" << endl;
                                        goto tech;
                                    }
                                }
                                else {
                                    cout << "\nWrong!" << endl << "Try again!" << endl;
                                    goto physical1;
                                }
                            }
                            else {
                                cout << "\nWrong!" << endl << "Try again!" << endl;
                                goto visual1;
                            }
                        }
                        else {
                            cout << "\nWrong!" << endl << "Try again!" << endl;
                            goto social1;
                        }
                    }
                    else {
                        cout << "\nWrong!" << endl << "Try again!" << endl;
                        goto earth1;
                    }

                }
                else {
                    cout << "\nWrong!" << endl << "Try again!" << endl;
                    goto science1;
                }
            }
            else {
                cout << "\nWrong!" << endl << "Try again!" << endl;
                goto writing1;
            }

        }
        else {
            cout << "\nWrong!" << endl << "Try again!" << endl;
            goto reading1;
        }
    }
    else {
        cout << "\nWrong!" << endl << "Try again!" << endl;
        goto math1;
    }
}
void Third_Grade()
{

    string math, reading, natlang, science1, english, music, visual1, technology, physical1;
    double ave;
math1:
    cout << "Math : "; cin >> math;
    if (math == "0" || math == "1" || math == "2" || math == "3" || math == "4" || math == "5")
    {
    reading1:
        cout << "Literary reading : "; cin >> reading;
        if (reading == "0" || reading == "1" || reading == "2" || reading == "3" || reading == "4" || reading == "5")
        {
        writing1:
            cout << "Native Language : "; cin >> natlang;
            if (natlang == "0" || natlang == "1" || natlang == "2" || natlang == "3" || natlang == "4" || natlang == "5")
            {
            science1:
                cout << "Life cycles : "; cin >> science1;
                if (science1 == "0" || science1 == "1" || science1 == "2" || science1 == "3" || science1 == "4" || science1 == "5")
                {
                earth1:
                    cout << "Foreign languages (e.g. English) : "; cin >> english;
                    if (english == "0" || english == "1" || english == "2" || english == "3" || english == "4" || english == "5")
                    {
                    social1:
                        cout << "Music : "; cin >> music;
                        if (music == "0" || music == "1" || music == "2" || music == "3" || music == "4" || music == "5")
                        {
                        visual1:
                            cout << "Art : "; cin >> visual1;
                            if (visual1 == "0" || visual1 == "1" || visual1 == "2" || visual1 == "3" || visual1 == "4" || visual1 == "5")
                            {
                            physical1:
                                cout << "Physical Education : "; cin >> physical1;
                                if (physical1 == "0" || physical1 == "1" || physical1 == "2" || physical1 == "3" || physical1 == "4" || physical1 == "5")
                                {
                                tech:
                                    cout << "Technology : "; cin >> technology;
                                    if (technology == "0" || technology == "1" || technology == "2" || technology == "3" || technology == "4" || technology == "5")
                                    {
                                        int math3, reading3, natlang3, science3, english3, music3, visual, technology3, physical;
                                        math3 = std::stoi(math);
                                        reading3 = std::stoi(reading);
                                        natlang3 = std::stoi(natlang);
                                        science3 = std::stoi(science1);
                                        english3 = std::stoi(english);
                                        music3 = std::stoi(music);
                                        visual = std::stoi(visual1);
                                        technology3 = std::stoi(technology);
                                        physical = std::stoi(physical1);

                                        ave = (math3 + reading3 + natlang3 + science3 + english3 + music3 + visual + technology3 + physical) / 9;
                                        if (math == "5" && ave >= 3.8) {
                                            cout << "Congratulations, you have been admitted to school!" << endl;
                                            system("pause 0");
                                        }
                                        else {
                                            cout << "Unfortunately, you have not been admitted to the school as you could not fully meet the requirements of the school..." << endl;
                                            cout << "Note!" << endl << "In order to be admitted to the school, the latest grade in mathematics must be 5 \nAnd the average grade in all subjects must be higher than or equal to 3.8!" << endl;
                                            system("pause 0");
                                        }
                                    }
                                    else {
                                        cout << "\nWrong!" << endl << "Try again!" << endl;
                                        goto tech;
                                    }
                                }
                                else {
                                    cout << "\nWrong!" << endl << "Try again!" << endl;
                                    goto physical1;
                                }
                            }
                            else {
                                cout << "\nWrong!" << endl << "Try again!" << endl;
                                goto visual1;
                            }
                        }
                        else {
                            cout << "\nWrong!" << endl << "Try again!" << endl;
                            goto social1;
                        }
                    }
                    else {
                        cout << "\nWrong!" << endl << "Try again!" << endl;
                        goto earth1;
                    }

                }
                else {
                    cout << "\nWrong!" << endl << "Try again!" << endl;
                    goto science1;
                }
            }
            else {
                cout << "\nWrong!" << endl << "Try again!" << endl;
                goto writing1;
            }

        }
        else {
            cout << "\nWrong!" << endl << "Try again!" << endl;
            goto reading1;
        }
    }
    else {
        cout << "\nWrong!" << endl << "Try again!" << endl;
        goto math1;
    }
}
void Fourth_Grade()
{   string math, literature, natlang, natscience, english, music, visual1, technology, physical1, rel;
    double ave;
math1:
    cout << "Math : "; cin >> math;
    if (math == "0" || math == "1" || math == "2" || math == "3" || math == "4" || math == "5")
    {
    reading1:
        cout << "Literature : "; cin >> literature;
        if (literature == "0" || literature == "1" || literature == "2" || literature == "3" || literature == "4" || literature == "5")
        {
        writing1:
            cout << "Native Language : "; cin >> natlang;
            if (natlang == "0" || natlang == "1" || natlang == "2" || natlang == "3" || natlang == "4" || natlang == "5")
            {
            science1:
                cout << "Natural Science : "; cin >> natscience;
                if (natscience == "0" || natscience == "1" || natscience == "2" || natscience == "3" || natscience == "4" || natscience == "5")
                {
                earth1:
                    cout << "Foreign languages (English) : "; cin >> english;
                    if (english == "0" || english == "1" || english == "2" || english == "3" || english == "4" || english == "5")
                    {
                    social1:
                        cout << "Music : "; cin >> music;
                        if (music == "0" || music == "1" || music == "2" || music == "3" || music == "4" || music == "5")
                        {
                        visual1:
                            cout << "Art : "; cin >> visual1;
                            if (visual1 == "0" || visual1 == "1" || visual1 == "2" || visual1 == "3" || visual1 == "4" || visual1 == "5")
                            {
                            physical1:
                                cout << "Physical Education : "; cin >> physical1;
                                if (physical1 == "0" || physical1 == "1" || physical1 == "2" || physical1 == "3" || physical1 == "4" || physical1 == "5")
                                {
                                tech:
                                    cout << "Technology : "; cin >> technology;
                                    if (technology == "0" || technology == "1" || technology == "2" || technology == "3" || technology == "4" || technology == "5")
                                    {
                                    rel:
                                        cout << "Foundations of Religious Cultures and Secular Ethics : "; cin >> rel;
                                        if (rel == "0" || rel == "1" || rel == "2" || rel == "3" || rel == "4" || rel == "5")
                                        {
                                            int math4, literature4, natlang4, natscience4, english4, music4, visual, technology4, physical, rel4;
                                            math4 = std::stoi(math);
                                            literature4 = std::stoi(literature);
                                            natlang4 = std::stoi(natlang);
                                            natscience4 = std::stoi(natscience);
                                            english4 = std::stoi(english);
                                            music4 = std::stoi(music);
                                            visual = std::stoi(visual1);
                                            technology4 = std::stoi(technology);
                                            physical = std::stoi(physical1);
                                            rel4 = std::stoi(rel);

                                            ave = (math4 + literature4 + natlang4 + natscience4 + english4 + music4 + visual + technology4 + physical + rel4) / 10;
                                            if (math == "5" && english == "5" && ave >= 3.8) {
                                                cout << "Congratulations, you have been admitted to school!" << endl;
                                                system("pause 0");
                                            }
                                            else {
                                                cout << "Unfortunately, you have not been admitted to the school as you could not fully meet the requirements of the school..." << endl;
                                                cout << "Note!" << endl << "In order to be admitted to the school, the latest grades in both mathematics and English language must be 5 \nAnd the average grade in all subjects must be higher than or equal to 3.8!" << endl;
                                                system("pause 0");
                                            }
                                        }
                                        else {
                                            cout << "\nWrong!" << endl << "Try again!" << endl;
                                            goto rel;
                                        }
                                    }
                                    else {
                                        cout << "\nWrong!" << endl << "Try again!" << endl;
                                        goto tech;
                                    }
                                }
                                else {
                                    cout << "\nWrong!" << endl << "Try again!" << endl;
                                    goto physical1;
                                }
                            }
                            else {
                                cout << "\nWrong!" << endl << "Try again!" << endl;
                                goto visual1;
                            }
                        }
                        else {
                            cout << "\nWrong!" << endl << "Try again!" << endl;
                            goto social1;
                        }
                    }
                    else {
                        cout << "\nWrong!" << endl << "Try again!" << endl;
                        goto earth1;
                    }

                }
                else {
                    cout << "\nWrong!" << endl << "Try again!" << endl;
                    goto science1;
                }
            }
            else {
                cout << "\nWrong!" << endl << "Try again!" << endl;
                goto writing1;
            }

        }
        else {
            cout << "\nWrong!" << endl << "Try again!" << endl;
            goto reading1;
        }
    }
    else {
        cout << "\nWrong!" << endl << "Try again!" << endl;
        goto math1;
    }
}
void Fifth_Grade()
{
    string math, literature, natlang, natscience, english, music, visual1, technology, physical1, geography, comscience, history;
    double ave;

math1:
    cout << "Math : "; cin >> math;
    if (math == "0" || math == "1" || math == "2" || math == "3" || math == "4" || math == "5")
    {
    reading1:
        cout << "Literature : "; cin >> literature;
        if (literature == "0" || literature == "1" || literature == "2" || literature == "3" || literature == "4" || literature == "5")
        {
        writing1:
            cout << "Native Language : "; cin >> natlang;
            if (natlang == "0" || natlang == "1" || natlang == "2" || natlang == "3" || natlang == "4" || natlang == "5")
            {
            science1:
                cout << "Botany : "; cin >> natscience;
                if (natscience == "0" || natscience == "1" || natscience == "2" || natscience == "3" || natscience == "4" || natscience == "5")
                {
                earth1:
                    cout << "Foreign languages (English) : "; cin >> english;
                    if (english == "0" || english == "1" || english == "2" || english == "3" || english == "4" || english == "5")
                    {
                    social1:
                        cout << "Music : "; cin >> music;
                        if (music == "0" || music == "1" || music == "2" || music == "3" || music == "4" || music == "5")
                        {
                        visual1:
                            cout << "Art : "; cin >> visual1;
                            if (visual1 == "0" || visual1 == "1" || visual1 == "2" || visual1 == "3" || visual1 == "4" || visual1 == "5")
                            {
                            physical1:
                                cout << "Physical Education : "; cin >> physical1;
                                if (physical1 == "0" || physical1 == "1" || physical1 == "2" || physical1 == "3" || physical1 == "4" || physical1 == "5")
                                {
                                tech:
                                    cout << "Technology : "; cin >> technology;
                                    if (technology == "0" || technology == "1" || technology == "2" || technology == "3" || technology == "4" || technology == "5")
                                    {
                                    geo:
                                        cout << "Geography : "; cin >> geography;
                                        if (geography == "0" || geography == "1" || geography == "2" || geography == "3" || geography == "4" || geography == "5")
                                        {
                                        com:
                                            cout << "Computer science : "; cin >> comscience;
                                            if (comscience == "0" || comscience == "1" || comscience == "2" || comscience == "3" || comscience == "4" || comscience == "5")
                                            {
                                            history:
                                                cout << "History : "; cin >> history;
                                                if (history == "0" || history == "1" || history == "2" || history == "3" || history == "4" || history == "5")
                                                {
                                                    int math4, literature4, natlang4, natscience4, english4, music4, visual, technology4, physical, geography5, comscience5, history5;
                                                    math4 = std::stoi(math);
                                                    literature4 = std::stoi(literature);
                                                    natlang4 = std::stoi(natlang);
                                                    natscience4 = std::stoi(natscience);
                                                    english4 = std::stoi(english);
                                                    music4 = std::stoi(music);
                                                    visual = std::stoi(visual1);
                                                    technology4 = std::stoi(technology);
                                                    physical = std::stoi(physical1);
                                                    geography5 = std::stoi(geography);
                                                    comscience5 = std::stoi(comscience);
                                                    history5 = std::stoi(history);

                                                    ave = (math4 + literature4 + natlang4 + natscience4 + english4 + music4 + visual + technology4 + physical + geography5 + comscience5 + history5) / 12;
                                                    if (math == "5" && english == "5" && ave >= 3.8) {
                                                        string oot;
                                                        string fma, sma, tma, foma, fima, sima, sema, ema, nma, tema;
                                                        int m1, m2, m3, m4, m5, m6, m7, m8, m9, m10;
                                                        string fea, sea, tea, foea, fiea, siea, seea, eea, nea, teea;
                                                        int e1, e2, e3, e4, e5, e6, e7, e8, e9, e10;
                                                        cout << "Congratulations, you have passed successfully the first step of school admission!" << endl;
                                                        cout << "\nPress ENTER in order to take exams\n" << endl;
                                                        system("pause 0");
                                                        system("cls");
                                                        cout << "Great! Now, it is time to take the second step of school admission\n" << endl;
                                                        cout.width(40);
                                                        cout << "Math Exam" << endl;
                                                        
                                                        cout << "\n1) Evan wants to measure the length of his room. Which unit of measure is appropriate to measure the length of his room ? " << endl;
                                                        cout << "A. centimeter                    B. foot                    C. inch                    D. millimeter" << endl;
                                                        cin >> fma;
                                                        if (fma == "B" || fma == "b") {
                                                            m1 = 6;
                                                        }
                                                        else {
                                                            m1 = 0;
                                                        }
                                                        cout << "\n2) Mrs. Perkins makes study guides for her class of 21 students. She uses 252 sheets of paper. How many sheets of paper are in each study guide ? " << endl;
                                                        cout << "A. 12 sheets                    B.  231 sheets                    C. 273 sheets                    D. 5,292 sheets" << endl;
                                                        cin >> sma;
                                                        if (sma == "A" || sma == "a") {
                                                            m2 = 6;
                                                        }
                                                        else {
                                                            m2 = 0;
                                                        }
                                                        cout << "\n3) Find the sum of the number's digits " << endl;
                                                        cout << "   17181920....565758 " << endl;
                                                        cout << "A. 333                    B.  444                    C. 286                    D. 180 " << endl;
                                                        cin >> tma;
                                                        if (tma == "A" || tma == "a") {
                                                            m3 = 6;
                                                        }
                                                        else {
                                                            m3 = 0;
                                                        }
                                                        cout << "\n4) If the width of a rectangle is 17 meters and the height is 5 meters, then what is the area of the rectangle?" << endl;
                                                        cout << "A. 75 square meters                     B. 44 square meters                     C. 85 square meters                    D. 170 square meters  " << endl;
                                                        cin >> foma;
                                                        if (foma == "C" || foma == "c") {
                                                            m4 = 6;
                                                        }
                                                        else {
                                                            m4 = 0;
                                                        }
                                                        cout << "\n5) Which best describes the set {2, 3, 5, 7, 11 ... }?" << endl;
                                                        cout << "A. odd numbers                      B. fractional numbers                      C. even numbers                    D. prime numbers   " << endl;
                                                        cin >> fima;
                                                        if (fima == "D" || fima == "d") {
                                                            m5 = 6;
                                                        }
                                                        else {
                                                            m5 = 0;
                                                        }
                                                        cout << "\n6) Use the table below to answer the question." << endl;
                                                        cout << " ______________________________________________" << endl;
                                                        cout << "|             Ashley’s Grocery Lis             »" << endl;
                                                        cout << "| Toothpaste ........................... $3.99 |" << endl;
                                                        cout << "| Bread ................................ $2.45 |" << endl;
                                                        cout << "| Milk ................................. $2.69 |" << endl;
                                                        cout << "| Apples ............................... $3.10 |" << endl;
                                                        cout << "| Cereal  .............................. $4.89 |" << endl;
                                                        cout << "|______________________________________________|" << endl;
                                                        cout << "Ashley goes to the grocery store to buy each of the items on her list. Ashley rounds the cost of each item to the nearest dollar. What is the estimated total cost of these items?" << endl;
                                                        cout << "A. $15.00                      B. $14.00                      C. $17.00                     D. $18.00" << endl;
                                                        cin >> sima;
                                                        if (sima == "C" || sima == "c") {
                                                            m6 = 6;
                                                        }
                                                        else {
                                                            m6 = 0;
                                                        }
                                                        cout << "\n7) Use the expression below to answer the question " << endl;
                                                        cout.width(30);
                                                        cout << "53 * 24" << endl;
                                                        cout << "How can the distributive property be used to solve this expression?" << endl;
                                                        cout << "A. (50 + 20)(3 + 4)                       B. (5 * 2) + (3 * 4)                       C. (53 + 4)(53 + 2)                      D. (53 * 20) + (53 * 4)" << endl;
                                                        cin >> sema;
                                                        if (sema == "D" || sema == "d") {
                                                            m7 = 6;
                                                        }
                                                        else {
                                                            m7 = 0;
                                                        }
                                                        cout << "\n8)  Which list is in order from least to greatest? " << endl;
                                                        cout << "A. 1,000; 1,010; 1,009 " << endl;
                                                        cout << "B. 1,010; 1,011; 1,100 " << endl;
                                                        cout << "C. 1,100; 1,010; 1,001 " << endl;
                                                        cout << "D. 1,010; 1,100; 1,001 " << endl;
                                                        cin >> ema;
                                                        if (ema == "B" || ema == "b") {
                                                            m8 = 6;
                                                        }
                                                        else {
                                                            m8 = 0;
                                                        }
                                                        cout << "\n9) Calculate the following expression" << endl;
                                                        cout << "2001 * 2004 - 2002 * 2003" << endl;
                                                        cout << "A. -2                       B. 2                       C. 0                      D. 1850" << endl;
                                                        cin >> nma;
                                                        if (nma == "A" || nma == "a") {
                                                            m9 = 6;
                                                        }
                                                        else {
                                                            m9 = 0;
                                                        }
                                                        cout << "\n10) MN -> is a two-digit number \nABC -> is a three-digit number \nFEDP -> is a four-digit number" << endl;
                                                        cout << "If ABC + MN = FEDP, then claculate the following expression:" << endl;
                                                        cout << "\n F^(M+N) + A^F = ..." << endl;
                                                        cout << "A. 1                       B. 2                       C. 9                      D. 10" << endl;
                                                        cin >> tema;
                                                        if (tema == "D" || tema == "d") {
                                                            m10 = 6;
                                                        }
                                                        else {                                                            
                                                            m10 = 0;
                                                        }
                                                        
                                                        int tmaf;
                                                        tmaf = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10;
                                                        cout << "\nYour score on the math exam is " << tmaf << "% out of 60%" << endl;
                                                        cout << "\nPress ENTER in order to take English exam\n" << endl;
                                                        system("pause 0");
                                                        system("cls");
                                                        cout.width(43);
                                                        cout << "English Exam" << endl;
                                                        cout << "\nChoose the correct answers for the following questions. There is no time limit. You will be able to see the answers at the end of the test" << endl;
                                                        cout << "\n1) I ______ bus on Mondays. " << endl;
                                                        cout << "A. am going to work with " << endl;
                                                        cout << "B. am going to work by " << endl;
                                                        cout << "C. go to work with " << endl;
                                                        cout << "D. go to work by " << endl;
                                                        cin >> fea;
                                                        if (fea == "D" || fea == "d") {
                                                            e1 = 4;
                                                        }
                                                        else {
                                                            e1 = 0;
                                                        }
                                                        cout << "\n2) Sorry, but this chair is ______. " << endl;
                                                        cout << "A. me " << endl;
                                                        cout << "B. mine" << endl;
                                                        cout << "C. my " << endl;
                                                        cout << "D. our " << endl;
                                                        cin >> sea;
                                                        if (sea == "B" || sea == "b") {
                                                            e2 = 4;
                                                        }
                                                        else {
                                                            e2 = 0;
                                                        }
                                                        cout << "\n3) A: 'How old ______?'  \n   B: 'I ______ .' " << endl;
                                                        cout << "A. are you / am 20 years old " << endl;
                                                        cout << "B. have you / have 20 years old" << endl;
                                                        cout << "C. are you / am 20 years " << endl;
                                                        cout << "D. do you have / have 20 years " << endl;
                                                        cin >> tea;
                                                        if (tea == "A" || tea == "a") {
                                                            e3 = 4;
                                                        }
                                                        else {
                                                            e3 = 0;
                                                        }
                                                        cout << "\n4) I ______ to the cinema." << endl;
                                                        cout << "A. not usually go " << endl;
                                                        cout << "B. don't usually go " << endl;
                                                        cout << "C. don't go usually " << endl;
                                                        cout << "D. do not go usually " << endl;
                                                        cin >> foea;
                                                        if (foea == "B" || foea == "b") {
                                                            e4 = 4;
                                                        }
                                                        else {
                                                            e4 = 0;
                                                        }
                                                        cout << "\n5) Where ______ ?" << endl;
                                                        cout << "A. your sister works " << endl;
                                                        cout << "B. your sister work " << endl;
                                                        cout << "C. does your sister work " << endl;
                                                        cout << "D. do your sister work " << endl;
                                                        cin >> fiea;
                                                        if (fiea == "C" || fiea == "c") {
                                                            e5 = 4;
                                                        }
                                                        else {
                                                            e5 = 0;
                                                        }
                                                        cout << "\n6) The test is ______ February." << endl;
                                                        cout << "A. in " << endl;
                                                        cout << "B. at " << endl;
                                                        cout << "C. on " << endl;
                                                        cout << "D. over " << endl;
                                                        cin >> siea;
                                                        if (siea == "A" || siea == "a") {
                                                            e6 = 4;
                                                        }
                                                        else {
                                                            e6 = 0;
                                                        }
                                                        cout << "\n7) I eat pasta ______ week." << endl;
                                                        cout << "A. twice in a " << endl;
                                                        cout << "B. twice a " << endl;
                                                        cout << "C. one time a " << endl;
                                                        cout << "D. once in a " << endl;
                                                        cin >> seea;
                                                        if (seea == "B" || seea == "b") {
                                                            e7 = 4;
                                                        }
                                                        else {
                                                            e7 = 0;
                                                        }
                                                        cout << "\n8) I don't have ______ free time." << endl;
                                                        cout << "A. many " << endl;
                                                        cout << "B. any " << endl;
                                                        cout << "C. a lot " << endl;
                                                        cout << "D. some " << endl;
                                                        cin >> eea;
                                                        if (eea == "B" || eea == "b") {
                                                            e8 = 4;
                                                        }
                                                        else {
                                                            e8 = 0;
                                                        }
                                                        cout << "\n9) A: '_____ to the cinema tomorrow?'" << endl;
                                                        cout << "A. We will go " << endl;
                                                        cout << "B. Do we go " << endl;
                                                        cout << "C. Have we gone " << endl;
                                                        cout << "D. Shall we go " << endl;
                                                        cin >> nea;
                                                        if (nea == "D" || nea == "d") {
                                                            e9 = 4;
                                                        }
                                                        else {
                                                            e9 = 0;
                                                        }
                                                        cout << "\n10) We went to the market ______ some vegetables." << endl;
                                                        cout << "A. to buy " << endl;
                                                        cout << "B. for buy " << endl;
                                                        cout << "C. for to buy " << endl;
                                                        cout << "D. for buying " << endl;
                                                        cin >> teea;
                                                        if (teea == "A" || teea == "a") {
                                                            e10 = 4;
                                                        }
                                                        else {
                                                            e10 = 0;
                                                        }
                                                        
                                                        int tenf;
                                                        tenf = e1 + e2 + e3 + e4 + e5 + e6 + e7 + e8 + e9 + e10;
                                                        cout << "\nYour score on the English exam is " << tenf << "% out of 40%" << endl;
                                                        cout << "\nThe exams are over!\nPress ENTER in order to find out if you've been accepted to school or not\n" << endl;
                                                        system("pause 0");
                                                        system("cls");                                                        
                                                        int t;
                                                        t = tmaf + tenf;
                                                        if (t >= 76) {
                                                            cout << "Congratulations, you have been admitted to school!" << endl;
                                                            cout << "Your total score is " << t << "%" << endl;
                                                            system("pause 0");
                                                        }
                                                        else {
                                                            cout << "Unfortunately, you have not been admitted to the school as you could not gain the required score on the exam..." << endl;
                                                            cout << "Note!" << endl << "In order to be admitted to the school, you should gain at least 76 score from both exams! \n( From the Math exam you could receive maximum 60% whereas from the English exam you could receive maximum 40% )" << endl;
                                                            system("pause 0");
                                                        }
                                                       
                                                        cout << "\nPress ENTER in order to see the results\n" << endl;
                                                        system("pause 0");
                                                        system("cls");
                                                        
                                                        cout << "Your results:" << endl;
                                                        cout << "                MATH                            |              ENGLISH              " << endl;
                                                        cout << endl;
                                                        if (m1 == 6 && e1 == 4) {
                                                            cout << "1) B (Your answer is correct!)                  |  1) D (Your answer is correct!)"<< endl;
                                                        }
                                                        else if (m1 != 6 && e1 == 4)
                                                        {
                                                            cout << "1) " << fma << " (Your answer is incorrect!)                |  1) D (Your answer is correct!)" << endl;
                                                            cout << "1) B (Correct answer)                           |  " << endl;
                                                        }
                                                        else if (m1 == 6 && e1 != 4){
                                                            cout << "1) B (Your answer is correct!)                  |  1) " << fea << " (Your answer is incorrect!)" << endl;
                                                            cout << "                                                |  1) D (Correct answer)" << endl;
                                                        }
                                                        else
                                                        {
                                                            cout << "1) " << fma << " (Your answer is incorrect!)                |  1) " << fea << " (Your answer is incorrect!)" << endl;
                                                            cout << "1) B (Correct answer)                           |  1) D (Correct answer)" << endl;
                                                        }

                                                        if (m2 == 6 && e2 == 4) {
                                                            cout << "\n2) A  (Your answer is correct!)                 |  2) B (Your answer is correct!)" << endl;
                                                        }
                                                        else if (m2 != 6 && e2 == 4) {
                                                            cout << "\n2) " << sma << " (Your answer is incorrect!)                |  2) B (Your answer is correct!)" << endl;
                                                            cout << "2) A  (Correct answer)                          |  " << endl;
                                                        }
                                                        else if (m2 == 6 && e2 != 4) {
                                                            cout << "\n2) A  (Your answer is correct!)                 |  2) "<< sea << " (Your answer is incorrect!)" << endl;
                                                            cout << "                                                |  2) B (Correct answer)" << endl;
                                                        }
                                                        else
                                                        {
                                                        cout << "\n2) " << sma << " (Your answer is incorrect!)                |  2) " << sea << " (Your answer is incorrect!)" << endl;
                                                        cout << "2) A (Correct answer)                           |  2) B (Correct answer)" << endl;
                                                        }

                                                        if (m3 == 6 && e3 == 4) {
                                                            cout << "\n3) A (Your answer is correct!)                  |  3) A (Your answer is correct!) " << endl;
                                                        }
                                                        else if (m3 != 6 && e3 == 4){
                                                            cout << "\n3) " << tma << " (Your answer is incorrect!)                |  3) A (Your answer is correct!)" << endl;
                                                            cout << "3) A  (Correct answer)                          | " << endl;
                                                        }
                                                        else if (m3 == 6 && e3 != 4)
                                                        {
                                                            cout << "\n3) A (Your answer is correct!)                  |  3) " << tea << "(Your answer is incorrect!)" << endl;
                                                            cout << "                                                |  3) A (Correct answer)" << endl;
                                                        }
                                                        else
                                                        {
                                                            cout << "\n3) " << tma << " (Your answer is incorrect!)                |  3) " << tea << "(Your answer is incorrect!)" << endl;
                                                            cout << "3) A  (Correct answer)                          |  3) A (Correct answer)" << endl;
                                                        }
                                                        if (m4 == 6 && e4 == 4) {
                                                            cout << "\n4) C (Your answer is correct!)                  |  4) B (Your answer is correct!)" << endl;
                                                        }
                                                        else if (m4 != 6 && e4 == 4) {
                                                            cout << "\n4) " << foma << " (Your answer is incorrect!)                |  4)  B (Your answer is correct!)" << endl;
                                                            cout << "4) C  (Correct answer)                          | " << endl;
                                                        }
                                                        else if (m4 == 6 && e4 != 4) {
                                                            cout << "\n4) C (Your answer is correct!)                  |  4) " << foea<< "(Your answer is incorrect!)" << endl;
                                                            cout << "                                                |  4) B (Correct answer)" << endl;
                                                        }
                                                        else 
                                                        {
                                                            cout << "\n4) " << foma << " (Your answer is incorrect!)                |  4) " << foea << "(Your answer is incorrect!)" << endl;
                                                            cout << "4) C  (Correct answer)                          |  4) B (Correct answer)" << endl;
                                                        }
                                                        
                                                        if (m5 == 6 && e5 == 4) {
                                                            cout << "\n5) D (Your answer is correct!)                  |  5) C (Your answer is correct!)" << endl;
                                                        }
                                                        else if (m5 != 6 && e5 == 4) {
                                                            cout << "\n5) " << fima << " (Your answer is incorrect!)                |  5) C (Your answer is correct!)" << endl;
                                                            cout << "5) D  (Correct answer)                          |  " << endl;
                                                        }
                                                        else if (m5 == 6 && e5 != 4)
                                                        {
                                                            cout << "\n5) D (Your answer is correct!)                  |  5) " << fiea << "(Your answer is incorrect!)" << endl;
                                                            cout << "                                                |  5) C (Correct answer)" << endl;
                                                        }
                                                        else
                                                        {
                                                            cout << "\n5) " << fima << " (Your answer is incorrect!)                |  5) " << fiea << "(Your answer is incorrect!)" << endl;
                                                            cout << "5) D  (Correct answer)                          |  5) C (Correct answer)" << endl;
                                                        }

                                                        if (m6 == 6 && e6 == 4) {
                                                            cout << "\n6) C (Your answer is correct!)                  |  6) A (Your answer is correct!)" << endl;
                                                        }
                                                        else if (m6 != 6 && e6 == 4){
                                                            cout << "\n6) " << sima << " (Your answer is incorrect!)                |  6) A (Your answer is correct!)" << endl;
                                                            cout << "6) C  (Correct answer)                          |  " << endl;
                                                        }
                                                        else if (m6 == 6 && e6 != 4) {
                                                            cout << "\n6) C (Your answer is correct!)                  |  6) " << siea << "(Your answer is incorrect!)" << endl;
                                                            cout << "                                                |  6) A (Correct answer)" << endl;
                                                        }
                                                        else
                                                        {
                                                            cout << "\n6) " << sima << " (Your answer is incorrect!)                |  6) " << siea << "(Your answer is incorrect!)" << endl;
                                                            cout << "6) C  (Correct answer)                          |  6) A (Correct answer)" << endl;
                                                        }

                                                        if (m7 == 6 && e7 == 4) {
                                                            cout << "\n7) D (Your answer is correct!)                  |  7) B (Your answer is correct!)" << endl;
                                                        }
                                                        else if (m7 != 6 && e7 == 4) {
                                                            cout << "\n7) " << sema << " (Your answer is incorrect!)                |  7) B (Your answer is correct!)" << endl;
                                                            cout << "7) D  (Correct answer)                          | " << endl;
                                                        }
                                                        else if (m7 == 6 && e7 != 4) {
                                                            cout << "\n7) D (Your answer is correct!)                  |  7) " << seea<< "(Your answer is incorrect!)" << endl;
                                                            cout << "                                                |  7) B (Correct answer)" << endl;
                                                        }
                                                        else {
                                                            cout << "\n7) " << sema << " (Your answer is incorrect!)                |  7) " << seea << "(Your answer is incorrect!)" << endl;
                                                            cout << "7) D  (Correct answer)                          |  7) B (Correct answer)" << endl;
                                                        }

                                                        if (m8 == 6 && e8 == 4) {
                                                            cout << "\n8) B (Your answer is correct!)                  |  8) B (Your answer is correct!)" << endl;
                                                        }
                                                        else if (m8 != 6 && e8 == 4){
                                                            cout << "\n8) " << ema << " (Your answer is incorrect!)                |  8) B (Your answer is correct!)" << endl;
                                                            cout << "8) B  (Correct answer)                          | " << endl;
                                                        }
                                                        else if (m8 == 6 && e8 != 4)
                                                        {
                                                            cout << "\n8) B (Your answer is correct!)                  |  8) "<<eea<< "(Your answer is incorrect!)" << endl;
                                                            cout << "                                                |  8) B (Correct answer)" << endl;
                                                        }
                                                        else {
                                                            cout << "\n8) " << ema << " (Your answer is incorrect!)                |  8) " << eea << "(Your answer is incorrect!)" << endl;
                                                            cout << "8) B  (Correct answer)                          |  8) B (Correct answer)" << endl;
                                                        }

                                                        if (m9 == 6 && e9 == 4) {
                                                            cout << "\n9) A (Your answer is correct!)                  |  9) D (Your answer is correct!)" << endl;
                                                        }
                                                        else if (m9 != 6 && e9 == 4) {
                                                            cout << "\n9) " << nma << " (Your answer is incorrect!)                |  9) D (Your answer is correct!)" << endl;
                                                            cout << "9) A  (Correct answer)                          | " << endl;
                                                        }
                                                        else if (m9 == 6 && e9 != 4) {
                                                            cout << "\n9) A (Your answer is correct!)                  |  9) " << nea << "(Your answer is incorrect!)" << endl;
                                                            cout << "                                                |  9) D (Correct answer)" << endl;
                                                        }
                                                        else {
                                                            cout << "\n9) " << nma << " (Your answer is incorrect!)                |  9) " << nea << "(Your answer is incorrect!)" << endl;
                                                            cout << "9) A  (Correct answer)                          |  9) D (Correct answer)" << endl;
                                                        }
                                                        if (m10 == 6 && e10 == 4) {
                                                            cout << "\n10) D (Your answer is correct!)                 |  10) A (Your answer is correct!)" << endl;
                                                        }
                                                        else if (m10 != 6 && e10 == 4){
                                                            cout << "\n10) " << tema << " (Your answer is incorrect!)               |  10) A (Your answer is correct!)" << endl;
                                                            cout << "10) D  (Correct answer)                         | " << endl;
                                                        }
                                                        else if (m10 == 6 && e10 != 4) {
                                                            cout << "\n10) D (Your answer is correct!)                 |  10) "<< teea << "(Your answer is incorrect!)" << endl;
                                                            cout << "                                                |  10) D (Correct answer)" << endl;
                                                        }
                                                        else {
                                                            cout << "\n10) " << tema << " (Your answer is incorrect!)               |  10) " << teea << "(Your answer is incorrect!)" << endl;
                                                            cout << "10) D  (Correct answer)                         |  10) D (Correct answer)" << endl;
                                                        }

                                                        
                                                    }
                                                    else {
                                                        cout << "Unfortunately, you could not pass the first selection stage ..." << endl;
                                                        cout << "Note!" << endl << "In order to pass the first selection stage your latest grades in both mathematics and English language must be 5 \nAnd the average grade in all subjects must be higher than or equal to 3.8!" << endl;
                                                        cout << " " << endl;
                                                        system("pause 0");
                                                        }
                                                }
                                            else {
                                                    cout << "\nWrong!" << endl << "Try again!" << endl;
                                                    goto history;
                                                }
                                            }
                                            else {
                                                cout << "\nWrong!" << endl << "Try again!" << endl;
                                                goto com;
                                            }
                                        }
                                        else {
                                            cout << "\nWrong!" << endl << "Try again!" << endl;
                                            goto geo;
                                        }
                                    }
                                    else {
                                        cout << "\nWrong!" << endl << "Try again!" << endl;
                                        goto tech;
                                    }
                                }
                                else {
                                    cout << "\nWrong!" << endl << "Try again!" << endl;
                                    goto physical1;
                                }
                            }
                            else {
                                cout << "\nWrong!" << endl << "Try again!" << endl;
                                goto visual1;
                            }
                        }
                        else {
                            cout << "\nWrong!" << endl << "Try again!" << endl;
                            goto social1;
                        }
                    }
                    else {
                        cout << "\nWrong!" << endl << "Try again!" << endl;
                        goto earth1;
                    }

                }
                else {
                    cout << "\nWrong!" << endl << "Try again!" << endl;
                    goto science1;
                }
            }
            else {
                cout << "\nWrong!" << endl << "Try again!" << endl;
                goto writing1;
            }

        }
        else {
            cout << "\nWrong!" << endl << "Try again!" << endl;
            goto reading1;
        }
    }
    else {
        cout << "\nWrong!" << endl << "Try again!" << endl;
        goto math1;
    }
}
void Grade() {
    string choice, grade;
    label:
    cout << "\nWhich grade do you want to apply for?" << endl;
    cout << "[1]  For the first grade" << endl;
    cout << "[2]  For the second grade" << endl;
    cout << "[3]  For the third grade" << endl;
    cout << "[4]  For the fourth grade" << endl;
    cout << "[5]  For the fifth grade" << endl;
    cin >> choice;
    system("cls");
    if (choice == "1") {
        cout << "Please enter  your most recent transcript. " << endl << "A transcript is a listing of every course you took to receive your diploma and the grade you received in each course" << endl;
        cout << endl;
        First_Grade();
    }
    else if (choice == "2") {
        cout << "Please enter  your most recent transcript. " << endl << "A transcript is a listing of every course you took to receive your diploma and the grade you received in each course" << endl;
        cout << endl;
        Second_Grade();
    }
    else if (choice == "3") {
        cout << "Please enter  your most recent transcript. " << endl << "A transcript is a listing of every course you took to receive your diploma and the grade you received in each course" << endl;
        cout << endl;
        Third_Grade();
    }
    else if (choice == "4") {
        cout << "Please enter  your most recent transcript. " << endl << "A transcript is a listing of every course you took to receive your diploma and the grade you received in each course" << endl;
        cout << endl;
        Fourth_Grade();
    }
    else if (choice == "5") {
        cout << "Please enter  your most recent transcript. " << endl << "A transcript is a listing of every course you took to receive your diploma and the grade you received in each course" << endl;
        cout << endl;
        Fifth_Grade();
    }
    else if (choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11") {
        cout << "Sorry, the school can only accept students up to fifth grade" << endl;
        goto label;
    }
    else {
        cout << "\nInvalid..." << endl << "Try again!" << endl;
        goto label;
    }
   
}

bool isNumeric(string name) {
    for (int i = 0; i < name.length(); i++)
        if (isdigit(name[i]) == false)
            return false; 
    return true;
}
void registration()
{
    string name, surname, fathern, month, father, mother, fpassport, mpassport, address;
    int i = 0, choice, choice2, opt;

    cout << "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° Personal Details °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;
label:
    cout << "First name : ";
    cin >> name;
    if (isNumeric(name)) { 
        cout << "Please, write your name!" << endl;
        goto label;
    }
label1:
    cout << "Surname: ";
    cin >> surname;
    if (isNumeric(surname)) {
        cout << "Please, write your surname!" << endl;
        goto label1;
    }
label2:
    
    cout << "Patronymic: ";
    cin >> ws; // consume any white-space characters
    getline(cin, fathern);
    if (isNumeric(fathern)) {
        cout << " " << endl;
        goto label2;
    }
    cout << "Please enter your birth date as required order " << endl;
    Birthdate();
label3:
    cout << "Father: "; cin >> father;
    if (isNumeric(father)) {
        cout << "Please, write your father's name!" << endl;
        goto label3;
    }
label4:
    cout << "Mother: "; cin >> mother;
    if (isNumeric(mother)) {
        cout << "Please, write your mother's name!" << endl;
        goto label4;
    }
label5:
    cout << "Father's passport serial number: "; cin>> fpassport;
    if (fpassport.length() < 9) // Check for minimum characters needed
    {
        cout << "\nPassport series should consist of 9 characters. \nEnter again..." << endl; // password should consist at least 6 characters
        goto label5;
    }
label6:
    cout << "Mother's passport serial number: "; cin >> mpassport;
    if (mpassport.length() < 9) // Check for validation
    {
        cout << "\nPassport series should consist of 9 characters. \nEnter again..." << endl; // at least 9 characters
        goto label6;
    }
    else if (fpassport == mpassport)
    {
        cout << "\nIt is your father's passport series" << endl;
        cout << "Please, enter your mother's passport series" << endl;
        goto label6;
    }
    cout << "Required form of entering mobile number: 99 999-99-99" << endl;
    int a, b, c, d;
    char hyphen;
    cout << "Mobile number: ";     
    cin >> a >> b >> hyphen >> c >> hyphen >> d;    
    int e, f, g, h;
    cout << "Father's telephone number: "; 
    cin >> e >> f >> hyphen >> g >> hyphen >> h;
    cout << "Address: "; 
    cin >> ws; // consume any white-space characters
    getline(cin, address);


    cout << "                                      PLEASE PRESS ENTER TO CONTINUE  " << endl;
    cout << "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;
    system("pause>0");
    system("cls");
Form:
    cout << "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;
    cout << "                                     " << name << " " << surname << " " << fathern << endl;
    cout << endl;
    Showdate();
    cout << "Father: " << father << endl;
    cout << "Mother: " << mother << endl;
    cout << "Address: " << address << endl;
    cout << "Father's passport series: " << fpassport << endl;
    cout << "Mother's passport series: " << mpassport << endl;
    cout << "Mobile number: (" << a << ") " << b << "-" << c << "-" << d << endl;
    cout << "Father's telephone number: (" << e << ") " << f << "-" << g << "-" << h << endl;
    cout << endl << endl << endl << endl<< endl << endl << endl << endl;
    cout << "Press 1 to Confirm your information above" << endl;
    cout << "Press 0 to make change" << endl;
ch:
    cin >> choice;
    if (choice == 0) {
    cha:
        cout << "\nPress 1 to change your First name" << endl;
        cout << "Press 2 to change your Second name" << endl;
        cout << "Press 3 to change your Patronymic" << endl;
        cout << "Press 4 to change your Birthdate" << endl;
        cout << "Press 5 to change your Father's name" << endl;
        cout << "Press 6 to change your Mother's name" << endl;
        cout << "Press 7 to change your Father's passport series" << endl;
        cout << "Press 8 to change your Mother's passport series" << endl;
        cout << "Press 9 to change your Mobile number" << endl;
        cout << "Press 10 to change your Father's mobile number" << endl;
        cout << "Press 11 to change your Address" << endl;
        cout << "\nPress 0 to go back" << endl;
        cin >> choice2;
        if (choice2 == 1) {
        n:
            cout << "First name : ";
            cin >> name;
            if (isNumeric(name)) {
                cout << "Please, write your name!" << endl;
                goto n;
            }
            goto l1;
        }
        else if (choice2 == 2) {
        s:
            cout << "Surname: ";
            cin >> surname;
            if (isNumeric(surname)) {
                cout << "Please, write your surname!" << endl;
                goto s;
            }
            goto l1;
        }
        else if (choice2 == 3) {
        p:
            cout << "Patronymic: ";
            cin >> ws; // consume any white-space characters
            getline(cin, fathern);
            if (isNumeric(fathern)) {
                cout << "Enter your patronymic!" << endl;
                goto p;
            }
            goto l1;
        }
        else if (choice2 == 4) {
            cout << "Please enter your birth date as required order " << endl;
            Birthdate();
            goto l1;
        }
        else if (choice2 == 5) {
        fn:
            cout << "Father: "; cin >> father;
            if (isNumeric(father)) {
                cout << "Please, write your father's name!" << endl;
                goto fn;
            }       
            goto l1;
        }
        else if (choice2 == 6) {
        mn:
            cout << "Mother: "; cin >> mother;
            if (isNumeric(mother)) {
                cout << "Please, write your mother's name!" << endl;
                goto mn;
            }
            goto l1;
        }
        else if (choice2 == 7) {
        fp:
            cout << "Father's passport serial number: "; cin >> fpassport;
            if (fpassport.length() < 9) // Check for minimum characters needed
            {
                cout << "\nPassport series should consist of 9 characters. \nEnter again..." << endl; // password should consist at least 6 characters
                goto fp;
            }
            goto l1;
        }
        else if (choice2 == 8) {
        mp:
            cout << "Mother's passport serial number: "; cin >> mpassport;
            if (mpassport.length() < 9) // Check for validation
            {
                cout << "\nPassport series should consist of 9 characters. \nEnter again..." << endl; // at least 9 characters
                goto mp;
            }
            else if (fpassport == mpassport)
            {
                cout << "\nIt is your father's passport series" << endl;
                cout << "Please, enter your mother's passport series" << endl;
                goto mp;
            }
            goto l1;
        }
        else if (choice2 == 9) {
            cout << "Required form of entering mobile number: 99 999-99-99" << endl;
            cout << "Mobile number: ";
            cin >> a >> b >> hyphen >> c >> hyphen >> d;            
            goto l1;
        }
        else if (choice2 == 10) {
            cout << "Required form of entering mobile number: 99 999-99-99" << endl;
            cout << "Father's telephone number: ";
            cin >> e >> f >> hyphen >> g >> hyphen >> h;
            goto l1;
        }
        else if (choice2 == 11) {
            cout << "Address: ";  
            cin >> ws; // consume any white-space characters
            getline(cin, address);
            goto l1;
        }
        else if (choice2 == 0) {
            system("cls");
            goto Form;
        }
        else {
            goto cha;
        }
    l1:
        cout << "Press 0 to Continue" << endl;
        cout << "Press 1 to change your other informathion" << endl;
        cin >> opt;
        if (opt == 0) {
            system("cls");
            goto Form;
        }
        else if (opt == 1) {
            goto cha;
        }
        else {
            goto l1;
        }

    }
    else if (choice == 1) {
        system("cls");
        cout << "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;
        cout << "                                     " << name << " " << surname << " " << fathern << endl;
        Grade();
    }
    else {
        cout << "\nPress 1 to Confirm your information above" << endl;
        cout << "Press 0 to make change" << endl;
        goto ch;
    }
}

int main()
{
    registration();
    system("pause 0");
    return 0;
}
