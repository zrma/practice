var http = require('http');
var url = require('utl');

function start() {
	function onReq(req, res) {
		var pathname = url.parse(req.url).pathname;
		console.log("Request for" + pathname +" recived: ");
		res.writeHead(200, {"content-type": "text/plain" });
		res.write("Hello world");
		response.end();
	}
	http.createServer(onReq).listen(8080);
	console.log("Server has started");

}

exports.start = start;
