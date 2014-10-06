var fs = require('fs');
var querystring = require("querystring");

function start(response, postData) {
	console.log("Request handler 'start' was called.");
	var body = "empty";
	fs.readFile('body.html', 'utf8', function(err, body) {
		if(err) {
			body = "No file";
		}
		response.writeHead(200, {"Content-Type": "text/html"});
		response.write(body);
		response.end();
	});
}

function upload(response, postData) {
	console.log("Request handler 'upload' was called.");
	response.writeHead(200, {"Content-Type": "text/plain"});
	response.write("You've sent: the text "+ 
			querystring.parse(postData).text);
	response.end();
}


exports.start = start;
exports.upload = upload;
