#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <string>

#include <libxml/HTMLparser.h>
#include <libxml/parser.h>

void ergodic(xmlNodePtr node, int deep)
{
    std::string text;
    for (int i = 0; i < deep; ++i)
    {
        text += "  ";
    }
    text += (char*)node->name;
    text += "\n";
    printf(text.c_str());
    xmlNodePtr cur = node->children;
    while (cur)
    {
        ergodic(cur, deep + 1);
        cur = cur->next;
    }
}

int main()
{
    xmlDocPtr doc;
    xmlNodePtr cur;
    do
    {
        doc = htmlParseFile("G:\\test\\ParseMobiHtml\\vsout\\ParseMobiHtml\\Debug\\test1.html", NULL);
        if (doc == NULL)
        {
            printf("htmlParseFile Failed");
            break;
        }
        cur = xmlDocGetRootElement(doc);
        if (cur == NULL)
        {
            printf("xmlDocGetRootElement Failed");
            break;
        }
        ergodic(cur, 0);
    }
    while (false);
    if (doc)
    {
        xmlFreeDoc(doc);
    }
    return 0;
}