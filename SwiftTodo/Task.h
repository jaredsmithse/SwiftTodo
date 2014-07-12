//
//  Task.h
//  SwiftTodo
//
//  Created by Jared Smith on 7/12/14.
//  Copyright (c) 2014 jaredsmithse. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Task : NSObject

- (id)initWithName:(NSString *) name;

@property (nonatomic, copy) NSString *name;

@end
