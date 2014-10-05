var http = require('http');

function start() {
	function onReq(req, res) {
		console.log("Req recived.");
		res.writeHead(200, {"content-type": "text/plain" });
		res.write("Hello world");
		response.end();
	}
	http.createServer(onReq).listen(8080);
	console.log("Server has started");

}

exports.start = start;
