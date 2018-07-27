//
//  MasterViewController.h
//  SocialLibraryInterface
//
//  Created by Sergey Krasnogorov on 27.07.2018.
//  Copyright © 2018 Sergey Krasnogorov. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

