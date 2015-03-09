//
//  Playlist.h
//  Algorhythm
//
//  Created by Samia Al Rahmani on 3/1/15.
//  Copyright (c) 2015 Samia Al Rahmani. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Playlist : NSObject

@property (strong, nonatomic) NSString *playlistTitle;
@property (strong, nonatomic) NSString *playlistDescription;
@property (strong, nonatomic) UIImage *playlistIcon;
@property (strong, nonatomic) UIImage *playlistIconLarge;
@property (strong, nonatomic) NSArray *playlistArtists;
@property (strong, nonatomic) UIColor *backgroundColor;

- (instancetype)initWithIndex:(NSUInteger)index;


@end
