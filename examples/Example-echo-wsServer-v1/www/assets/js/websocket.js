ws = new WebSocket("ws://localhost:8080/")
console.log("initialized websocket")
ws.onmessage = function(evt) {
     console.log(evt.data);
}
ws.onopen = function() {
	console.log("connected");
}
ws.onclose = function() {
	console.log("closed websocket");
}


  



