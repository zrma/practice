#import <Foundation/Foundation.h>

int main(int argc, char *argv[]) {
	@autoreleasepool {
		NSLog(@"File IO Example");
		NSError *error = nil;
		//read
		NSString *read = [[NSString alloc]
			initWithContentsOfFile: @"/etc/resolv.conf"
						  encoding:NSASCIIStringEncoding
							 error: &error];

		if (!read) {
			NSLog(@"read error: %@", [error localizedDescription]);
		} else {
			NSLog(@"<read>\n %@", read);
		}
	}
	return 0;
}
