//
//  NSMutableArray+MemCheck.h
//  inFoundation
//
//  Created by Alexey Glushkov on 20.02.11.
//  Copyright 2011 Mobile Platforms. All rights reserved.
//

#ifdef MEMTEST_ON

#import <Foundation/Foundation.h>
#import "NSMemCheckObject.h"

@interface NSMutableArray(MemCheck)

//for memData
- (NSString*) allMem;
- (NSArray*) top:(NSInteger)top;
- (NSMemCheckObject*) memCheckObjectByPointer:(id)obj;

- (void) markHeap;
- (NSString*) showHeaps;
- (void) markHeapWithName:(NSString*)name;

- (void) saveGraphInFolder:(NSString*)folderPath withName:(NSString*)name; 
- (void) saveGraphInHomeWithName:(NSString*)name;

@end

#endif