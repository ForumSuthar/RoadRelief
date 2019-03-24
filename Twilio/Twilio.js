
exports.handler = function(context, event, callback) {
    var client = context.getTwilioClient()
    client.messages.create({to: "+13608138770", from: "+15752152755", body: "Command Received"})

   function cb() {
       callback(null, "OK");
    }
    setTimeout(cb, 3000); 
};

