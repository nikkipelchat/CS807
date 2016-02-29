local url = "http://rtupdate.wunderground.com/weatherstation/updateweatherstation.php?ID=ISASKATC113&PASSWORD=Ns294*Ns294*&dateutc=now&winddir=135&windspeedmph=15&windgustmph=16&tempf=28.5&rainin=0&dailyrainin=0&baromin=29.1&dewptf=23&humidity=80&weather=&clouds=&softwaretype=vws&version3&realtime=1&rtfreq=60&action=updateraw";
 
function sendHTTPGet() {
    
    local request = http.get(url, {});
    local response = request.sendsync();
    server.log("Wunderground response = " + response.body);
    
    server.log("URL: " + url);
    
    device.send("return", returned);
}

device.on("weather", sendHTTPGet);
