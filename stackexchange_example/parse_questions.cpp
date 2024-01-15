#include "json.hpp"
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ifstream fJson("questions.json");
    stringstream buffer;
    buffer << fJson.rdbuf();
    auto json = nlohmann::json::parse(buffer.str());

    cout << "\nNumber of questions: " << json["numOfQues"] << "\n";

    for (auto question : json["questions"])
    {

        cout << question["question"] << "\n\n";
        int qCount = 0;
        for (auto opt : question["options"])
        {
            qCount++;
            cout << qCount << ". " << opt << "\n";
        }
        cout << "Answer: " << question["answer"] << "\n";
    }

    return 0;
}

