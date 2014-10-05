var http = require('http');
var url = require('url');

function start(route, handle) {
	function onReq(req, res) {
		var pathname = url.parse(req.url).pathname;
		console.log("Request for" + pathname +" recived: ");

		route( handle, pathname);

		res.writeHead(200, {"content-type": "text/plain" });
		res.write("Hello world");
		res.end();
	}
	http.createServer(onReq).listen(8080);
	console.log("Server has started");
}

exports.start = start;
