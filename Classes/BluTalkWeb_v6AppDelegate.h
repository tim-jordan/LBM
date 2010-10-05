//
//  BluTalkWeb_v6AppDelegate.h
//  BluTalkWeb_v6
//
//  Created by Tim Jordan on 05.10.10.
//  Copyright HTML Design 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

// Protokolle
#import "SplashViewProtocol.h"
#import "MainViewProtocol.h"


@protocol SplashViewProtocol;
@protocol MainViewProtocol;

@interface BluTalkWeb_v6AppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate, SplashViewProtocol, MainViewProtocol> {
    UIWindow *window;
    UITabBarController *tabBarController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end
