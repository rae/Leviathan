#import <TargetConditionals.h>

#if TARGET_OS_IPHONE
@import UIKit;
#else
@import Cocoa;
#endif

FOUNDATION_EXPORT double MAIKitVersionNumber;

FOUNDATION_EXPORT const unsigned char MAIKitVersionString[];

#import "MAIDataAsset.h"
#import "MAILayoutXAxisAnchor.h"
#import "MAILayoutYAxisAnchor.h"
#import "MAILayoutDimension.h"
#import "MAILayoutConstraint.h"
#import "MAILayoutManager.h"
#import "MAITextTab.h"
#import "MAIParagraphStyle.h"
#import "MAIMutableParagraphStyle.h"
#import "MAIShadow.h"
#import "MAIStringDrawingContext.h"
#import "MAITextAttachment.h"
#import "MAITextContainer.h"
#import "MAITextStorage.h"
#import "MAIAccessibilityElement.h"
#import "MAIApplication.h"
#import "MAIBezierPath.h"
#import "MAIButton.h"
#import "MAICollectionView.h"
#import "MAICollectionViewFlowLayoutInvalidationContext.h"
#import "MAICollectionViewFlowLayout.h"
#import "MAICollectionViewLayoutAttributes.h"
#import "MAICollectionViewUpdateItem.h"
#import "MAICollectionViewLayoutInvalidationContext.h"
#import "MAICollectionViewLayout.h"
#import "MAICollectionViewTransitionLayout.h"
#import "MAIColor.h"
#import "MAIControl.h"
#import "MAIDatePicker.h"
#import "MAIDocument.h"
#import "MAIEvent.h"
#import "MAIFont.h"
#import "MAIFontDescriptor.h"
#import "MAIGestureRecognizer.h"
#import "MAIImage.h"
#import "MAIImageView.h"
#import "MAILayoutGuide.h"
#import "MAILabel.h"
#import "MAIMenuItem.h"
#import "MAINib.h"
#import "MAIPanGestureRecognizer.h"
#import "MAIPasteboard.h"
#import "MAIPrinter.h"
#import "MAIPrintInfo.h"
#import "MAIResponder.h"
#import "MAIRotationGestureRecognizer.h"
#import "MAIScreen.h"
#import "MAIScrollView.h"
#import "MAISegmentedControl.h"
#import "MAISlider.h"
#import "MAISplitViewController.h"
#import "MAIStackView.h"
#import "MAIStepper.h"
#import "MAIStoryboard.h"
#import "MAIStoryboardSegue.h"
#import "MAITableViewRowAction.h"
#import "MAITableView.h"
#import "MAITextField.h"
#import "MAITextView.h"
#import "MAIToolbar.h"
#import "MAITouch.h"
#import "MAIView.h"
#import "MAIViewController.h"
#import "MAIVisualEffectView.h"
#import "MAIWindow.h"

#import "MAILayoutManagerDelegate.h"
#import "MAITextLayoutOrientationProvider.h"
#import "MAITextAttachmentContainer.h"
#import "MAITextStorageDelegate.h"
#import "MAIApplicationDelegate.h"
#import "MAICollectionViewDataSource.h"
#import "MAICollectionViewDelegate.h"
#import "MAICollectionViewDelegateFlowLayout.h"
#import "MAIGestureRecognizerDelegate.h"
#import "MAITableViewCell.h"
#import "MAITableViewDataSource.h"
#import "MAITableViewDelegate.h"
#import "MAITextFieldDelegate.h"
#import "MAITextInput.h"
#import "MAITextViewDelegate.h"
#import "MAIToolbarDelegate.h"
