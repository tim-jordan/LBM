//
//  PeopleViewController.h
//  BluTalkWeb_v6
//
//  Created by Tim Jordan on 05.10.10.
//  Copyright 2010 HTML Design. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MainViewProtocol.h"

@interface PeopleViewController : UIViewController {

}
@property (nonatomic, assign) id<MainViewProtocol> modalDelegate;

- (IBAction) showProfile;

@end
