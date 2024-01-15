# ge_timeseries
Time series analysis on GE prices


## The work so far:

- Simple understanding the JSON files - it's really quite simple, just a text format with identifiers and values, can be hierarchic I guess
- Parsing JSON with C++: The `nlohmann` library is quite convenient, and a Stack Exchange question was used to set up the basic workflow

- GE API: web pages containing the JSON file based on RuneLite, as explained here https://oldschool.runescape.wiki/w/RuneScape:Real-time_Prices
- Fetching the API is simple with a `curl`-based `bash` script

- The C++ parser file was set up using timestamps, converting UNIX timestamp to UTC time (learned about pointers, pretty cool!)
