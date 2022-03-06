console.log("js start")
console.log("js end");



var meta_entity = require('bindings')('genepi-entity');

var a = new meta_entity.entity();
a.open();
a.close();
