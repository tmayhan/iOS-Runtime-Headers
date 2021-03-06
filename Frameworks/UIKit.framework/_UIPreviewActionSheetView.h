/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPreviewActionSheetView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    NSArray * _actions;
    UILongPressGestureRecognizer * _captureTouchesRecognizer;
    id /* block */  _completionHandler;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _contentInsets;
    <_UIPreviewActionSheetViewDelegate> * _delegate;
    NSString * _title;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, retain) UILongPressGestureRecognizer *captureTouchesRecognizer;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIPreviewActionSheetViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (void)_performActionForPreviewAction:(id)arg1 interfaceAction:(id)arg2;
- (void)_setupViewHierarchy;
- (id)actions;
- (id)captureTouchesRecognizer;
- (id /* block */)completionHandler;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 title:(id)arg2 items:(id)arg3 contentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg4;
- (void)setActions:(id)arg1;
- (void)setCaptureTouchesRecognizer:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
