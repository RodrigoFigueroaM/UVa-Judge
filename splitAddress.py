'''Address of a website often has the following form: <protocol>://<domain>.com[/<context>] where <protocol>, <domain> and <context> are non-empty strings consisting of lowercase English letters.
Note that there may be no <context> part in an address.

We need an algorithm that splits an address into an array of its parts: <protocol>, <domain> and <context> (if there is one).

Example

For address = "http://codefights.com", the output should be
splitAddress(address) = ["http", "codefights"];
For address = "http://stackoverflow.com/questions", the output should be
splitAddress(address) = ["http", "stackoverflow", "questions"].
'''

def splitAddress(address):
    split1 = address.split('://', 1 )
    protocol = split1[0]
    split2 = split1[1].split('.com', 1 )
    domain = split2[0]
    context = None
    if split1[1].split('.com', 1 )[1] != '':
        context = split1[1].split('/',1)[1]
        
    if context:
        result = [protocol, domain, context ]
    else:
        result = [protocol, domain]
    return result

if __name__ == '__main__':
	splitAddress("http://codefights.com")
	splitAddress("http://stackoverflow.com/questions")