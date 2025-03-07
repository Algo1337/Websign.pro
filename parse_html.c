#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <Net/web.h>
#include <OS/file.h>

int main() {
    File html = Openfile("test.html", FILE_READ);
    char *data = strdup(html.Read(&html));
    html.Destruct(&html);

    Control **Controls = ParseHTMLContent(data);

    String template = NewString(NULL);
    for(int i = 0; Controls[i] != NULL; i++) {
        printf("Element: %d\n", Controls[i]->Tag);
        String n = ConstructControl(Controls[i], 0);
        template.AppendString(&template, n.data);
        n.Destruct(&n);

        if(Controls[i]->SubControls != NULL) {
            for(int s = 0; Controls[i]->SubControls[s] != NULL; s++) {
                printf("Sub-Element: %d\n", (int)((Control *)Controls[i]->SubControls[s])->Tag);
                String child = ConstructControl(((Control *)Controls[i]->SubControls[s]), 0);
                template.AppendString(&template, child.data);
                child.Destruct(&child);
            }
        }
    }

    printf("%s\n", template.data);
    template.Destruct(&template);

    return 0;
}