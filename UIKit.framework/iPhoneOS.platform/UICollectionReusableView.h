//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UICollectionView, UICollectionViewLayoutAttributes;

@interface UICollectionReusableView : UIView
{
    UICollectionViewLayoutAttributes *_layoutAttributes;
    NSString *_reuseIdentifier;
    UICollectionView *_collectionView;
    struct {
        unsigned int inUpdateAnimation:1;
    } _reusableViewFlags;
}

@property(readonly, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (void)_setInUpdateAnimation:(BOOL)arg1;
- (BOOL)_isInUpdateAnimation;
- (void)_setCollectionView:(id)arg1;
- (id)_collectionView;
- (void)_setReuseIdentifier:(id)arg1;
- (id)_layoutAttributes;
- (void)_setLayoutAttributes:(id)arg1;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

