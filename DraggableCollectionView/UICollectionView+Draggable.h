//
//  Copyright (c) 2013 Luke Scott
//  https://github.com/lukescott/DraggableCollectionView
//  Distributed under MIT license
//

#import <UIKit/UIKit.h>
#import "UICollectionViewDataSource_Draggable.h"

@interface UICollectionView (Draggable)

@property (nonatomic, assign) BOOL draggable;
@property (nonatomic, assign) BOOL deletable; // delete cells if dropped outside the collectionView bounds. Defaults is NO
@property (nonatomic, assign) UIEdgeInsets scrollingEdgeInsets;
@property (nonatomic, assign) CGFloat scrollingSpeed;

@end
