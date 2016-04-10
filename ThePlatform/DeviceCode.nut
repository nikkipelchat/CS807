function returnFromImp(yeard) {
    //server.log("returned from agent");
    
    imp.wakeup(60.0, sendWeather);
}

function sendWeather() {
    agent.send("weather", get);
}


agent.on("return", returnFromImp);
 
sendHTTPGet();
