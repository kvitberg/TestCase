var Observable = require("FuseJS/Observable");

var filter = Observable();

var name = filter.map(function(x) { return x.name; });

module.exports = {
	name: name,
};
