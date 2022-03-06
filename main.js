console.log("js start")



var meta_entity = require('bindings')('genepi-entity');

var a = new meta_entity.entity();
a.open();
a.close();


console.log("js end");