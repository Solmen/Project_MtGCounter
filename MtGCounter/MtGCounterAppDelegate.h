//
//  MtGCounterAppDelegate.h
//  MtGCounter
//
//  Created by Samuel Tolkin on 3/27/14.
//  Copyright (c) 2014 Samuel Tolkin. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MtGCounterViewController;

@interface MtGCounterAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    MtGCounterViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet MtGCounterViewController *viewController;

@end

