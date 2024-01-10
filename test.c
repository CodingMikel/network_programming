#include <stdio.h>
#include <stdlib.h>

int main() {
	char mail[50],command[200];
	scanf("%s", mail);
	sprintf(command,
            "curl -s --url 'smtp://smtp.gmail.com:587' --ssl-reqd "
            "--mail-from 'toniminh161200@gmail.com' --mail-rcpt %s "
            "--user 'toniminh161200@gmail.com:tkxj thcp fpzf exna' --tlsv1.2 --upload-file mail.html",
    mail);
    system(command);
    return 0;
}
