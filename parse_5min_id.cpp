#include "json.hpp"
#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream fJson(argv[1]);
    stringstream buffer;
    buffer << fJson.rdbuf();
    auto json = nlohmann::json::parse(buffer.str());

    cout << "Item ID " << json["itemId"] << "\n";

    for (auto entry : json["data"])
    {
        //cout << entry["timestamp"] << "\n";
	
	time_t t = entry["timestamp"];
	cout << "UTC: " << put_time( gmtime(&t), "%c %Z") << "\n";
//        int qCount = 0;
//        for (auto opt : question["options"])
//        {
//            qCount++;
//            cout << qCount << ". " << opt << "\n";
//        }
//        cout << "Answer: " << question["answer"] << "\n";
    }

    return 0;
}

