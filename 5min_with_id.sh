#!/bin/sh
while true
do
curl "https://prices.runescape.wiki/api/v1/osrs/timeseries?timestep=5m&id=${1}" > 5min_${1}.json
sleep 300
done
